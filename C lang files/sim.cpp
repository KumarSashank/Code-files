#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define no_of_customers 5
#define no_of_resources 3

int total[no_of_resources] = {0};
int available[no_of_resources];
int maximum[no_of_customers][no_of_resources];
int allocation[no_of_customers][no_of_resources] = {0};
int need[no_of_customers][no_of_resources];
int Bavailable[no_of_resources];
int Bmaximum[no_of_customers][no_of_resources];
int Ballocation[no_of_customers][no_of_resources];
int Bneed[no_of_customers][no_of_resources];
int Finish[no_of_customers] = {0};

int release_resources(int customer_num);
int request_resources(int customer_num, int request[]);
void *thread_func(void *customer_numt);
int bankerAlgorithm(int customer_num, int request[]);
void printState();
pthread_mutex_t mutex;
char string[no_of_resources * 2] = {0};
int safeSequence[no_of_customers] = {0};

int main(int argc, const char *argv[])
{
    // initializing the matrices
    int i, j;
    for (i = 0; i < argc - 1; i++)
    {
        available[i] = atoi(argv[i + 1]);
        total[i] = available[i]; // in the begining available resources equal to total resources
    }
    for (i = 0; i < no_of_resources; i++)
    {
        for (j = 0; j < no_of_customers; j++)
        {
            maximum[j][i] = rand() % (total[i] + 1); // maximum should less than total
            need[j][i] = maximum[j][i];              // need=maximum-allocation  (allocation=0)
        }
    }
    // initializing the matrices

    // print the state of the process

    for (i = 0; i < no_of_resources; i++)
    {
        string[i * 2] = i + 'A';
        string[i * 2 + 1] = ' ';
    }
    printf("Total system resources are:\n");
    printf("%s\n", string);
    for (i = 0; i < no_of_resources; i++)
    {
        printf("%d ", total[i]);
    }
    printf("\n\nProcesses (maximum resources):\n");
    printf("   %s\n", string);
    for (i = 0; i < no_of_customers; i++)
    {
        printf("P%d ", i + 1);
        for (j = 0; j < no_of_resources; j++)
        {
            printf("%d ", maximum[i][j]);
        }
        printf("\n");
    }
    printState();
    // print the state of the process

    pthread_mutex_init(&mutex, NULL); // initialize mutex
    pthread_t p1, p2, p3, p4, p5;
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    pthread_create(&p1, NULL, thread_func, &a);
    pthread_create(&p2, NULL, thread_func, &b);
    pthread_create(&p3, NULL, thread_func, &c);
    pthread_create(&p4, NULL, thread_func, &d);
    pthread_create(&p5, NULL, thread_func, &e); // create 5 threads
    char *returnV;

    pthread_join(p1, (void **)&returnV);
    pthread_join(p2, (void **)&returnV);
    pthread_join(p3, (void **)&returnV);
    pthread_join(p4, (void **)&returnV);
    pthread_join(p5, (void **)&returnV); // wait for all the 5 threads to terminate

    return 0;
}

void *thread_func(void *Tcustomer_num)
{
    int i;
    int *c = (int *)Tcustomer_num;
    int customer_num = *c;
    int requestSum = 0;
    while (!Finish[customer_num])
    { // the whilie loop stops when the thread has finished and its need becomes zero
        requestSum = 0;
        int request[no_of_resources] = {0};
        for (i = 0; i < no_of_resources; i++)
        {

            request[i] = rand() % (need[customer_num][i] + 1); // generate a request below its need randomly
            requestSum = requestSum + request[i];
        }
        if (requestSum != 0) // to make sure it doesn't requst for 0 reaources
            while (request_resources(customer_num, request) == -1)
                ; // only when the request has been granted succesfully while the loop terminates, otherwise it will keep making the same request.
    }
    return 0;
}

int request_resources(int customer_num, int request[])
{
    int i, j;
    int returnValue = -1;

    // since  want the process to print the result continuously and also run without race condition, we make the part
    // involing printing and accesing globale variable critical.
    // critical section
    pthread_mutex_lock(&mutex);
    printf("\nP%d requests for ", customer_num + 1);
    for (i = 0; i < no_of_resources; i++)
    {
        printf("%d ", request[i]);
    }
    printf("\n");

    for (i = 0; i < no_of_resources; i++)
    { // to check whether request<= availabe
        // if it is not, then it will return -1
        if (request[i] > available[i])
        {
            printf("P%d is waiting for the reaources...\n", customer_num + 1);

            pthread_mutex_unlock(&mutex); // before the thread return, it has to unlock the mutex
            return -1;
        }
    }
    returnValue = bankerAlgorithm(customer_num, request); // execute banker's algorithm

    if (returnValue == 0)
    {
        int needIsZero = 1;
        printf("a safe sequence is found: ");
        for (i = 0; i < no_of_customers; i++)
        {
            printf("P%d ", safeSequence[i] + 1);
        }
        printf("\nP%d's request has been granted\n", customer_num + 1);

        for (j = 0; j < no_of_resources; j++)
        { // give the resources to the theread
            allocation[customer_num][j] = allocation[customer_num][j] + request[j];
            available[j] = available[j] - request[j];
            need[customer_num][j] = need[customer_num][j] - request[j];
            if (need[customer_num][j] != 0)
            { // to check if need is zero
                needIsZero = 0;
            }
        }
        if (needIsZero)
        {

            Finish[customer_num] = 1;        // if need is zero, mark the thread "finish"
            release_resources(customer_num); // release resources when a thread finishes
        }
        printState();
    }
    else
    {
        printf("cannot find a safe sequence\n");
    }
    pthread_mutex_unlock(&mutex); // unlock the mutex
    return returnValue;
}

int release_resources(int customer_num)
{
    int j;
    printf("P%d releases all the resources\n", customer_num + 1);
    for (j = 0; j < no_of_resources; j++)
    {
        available[j] = available[j] + allocation[customer_num][j]; // release the resources
        allocation[customer_num][j] = 0;
    }
    return 0;
}

int bankerAlgorithm(int customer_num, int request[])
{
    int i, j, k;
    int finish[no_of_customers] = {0};
    for (i = 0; i < no_of_resources; i++)
    { // copy the matrices
        Bavailable[i] = available[i];
        for (j = 0; j < no_of_customers; j++)
        {
            Ballocation[j][i] = allocation[j][i];
            Bmaximum[j][i] = maximum[j][i];
            Bneed[j][i] = need[j][i];
        }
    }
    for (i = 0; i < no_of_resources; i++)
    { // pretend to give the resource to the thread
        Bavailable[i] = Bavailable[i] - request[i];
        Ballocation[customer_num][i] = Ballocation[customer_num][i] + request[i];
        Bneed[customer_num][i] = Bneed[customer_num][i] - request[i];
    }

    // safety Algorithm
    int count = 0;
    while (1)
    {
        int I = -1;
        for (i = 0; i < no_of_customers; i++)
        { // to find a thread that its need is less than or equal to available.
            int nLessThanA = 1;
            for (j = 0; j < no_of_resources; j++)
            {
                if (Bneed[i][j] > Bavailable[j] || finish[i] == 1)
                {
                    nLessThanA = 0;
                    break;
                }
            }
            if (nLessThanA)
            { // if the thread is found, record its thread number
                I = i;
                break;
            }
        }
        if (I != -1)
        {
            safeSequence[count] = I; // record the sequence
            count++;
            finish[I] = 1; // mark the thread "finish"
            for (k = 0; k < no_of_resources; k++)
            { // pretend to give the resource to thread
                Bavailable[k] = Bavailable[k] + Ballocation[I][k];
            }
        }
        else
        { // if can not find any thread that its need is less than or equal to available.

            for (i = 0; i < no_of_customers; i++)
            {
                if (finish[i] == 0)
                { // if there is any thread hasn't been found, that means it can't find a safe sequence
                    return -1;
                }
            }
            return 0; // all the threads have been found
        }
    }
}

void printState()
{
    int i, j;
    printf("Processes (currently allocated resources):\n");
    printf("   %s\n", string);

    for (i = 0; i < no_of_customers; i++)
    {
        printf("P%d ", i + 1);
        for (j = 0; j < no_of_resources; j++)
        {
            printf("%d ", allocation[i][j]);
        }
        printf("\n");
    }
    printf("Processes (possibly needed resources):\n");
    printf("   %s\n", string);
    for (i = 0; i < no_of_customers; i++)
    {
        printf("P%d ", i + 1);
        for (j = 0; j < no_of_resources; j++)
        {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }
    printf("Available system resources are:\n");
    printf("%s\n", string);

    for (i = 0; i < no_of_resources; i++)
    {
        printf("%d ", available[i]);
    }
    printf("\n");
}