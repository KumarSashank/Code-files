

// Simulation of Round-Robin Scheduling algorithm used in Operating systems//
// Fixed time slice of 2 is used.Process queue is implemented a sLinked list//
// The program is tuned for 10 processes and Buurst times need to be entered//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct node
{
	int arrival;
	int burst;
	int burst1;
	int turnaround;
	int waiting;
	int finish;
	int res;
	int name;

	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

int empty()
{
	if (head == NULL)
		return 1;
	else
		return 0;
}

void append(struct node *temp)
{
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp->next = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
		tail->next = NULL;
	}
}

struct node *serve()
{
	struct node *temp;
	if (!empty())
	{
		temp = head;
		head = head->next;

		return temp;
	}
	else
	{
		// std::cout<<"Ready q is empty"<<"\n";
		temp = new (node);
		temp->name = 0;
		return temp;
	}
}

int main()
{
	int max;

	struct node *p[10];
	struct node *exe;

	int quantum;
	int period = 0;
	int count = 0;
	int i;
	int choice = 3;

	double totalWaiting = 0;
	double avgWaiting;
	std::cin >> max;
	std::cin >> quantum;
	for (i = 0; i < max; i++)
	{
		std::cin >> p[i]->arrival;
		//	std::cout<<i<<" arival time is "p[i]->arrival << "\n";
	}

	for (i = 0; i < max; i++)
	{
		std::cin >> p[i]->burst;
		p[i]->burst1 = p[i]->burst;
	}
	int t = 0;
	while (count < max)
	{
		if (choice == 2 || choice == 3)
		{
			while (t < max && p[t]->arrival <= period)
			{
				append(p[t]);
				t = t + 1;
			}
		}
		exe = new (node);
		exe = serve();
		//    getchar();
		if (exe->name != 0)
		{
			if (exe->res == -1)
				exe->res = period - exe->arrival;
			if (exe->burst1 > quantum)
			{
				exe->burst1 = exe->burst1 - quantum;
				period = period + quantum;

				if (choice == 2 || choice == 3)
				{
					while (t < max && p[t]->arrival <= period)
					{
						append(p[t]);
						t = t + 1;
					}
				}

				append(exe);
			}
			else
			{
				// if (exe -> burst1 != 0)
				{
					period = period + exe->burst1;
					exe->burst1 = 0;
					exe->finish = period;
					exe->turnaround = exe->finish - exe->arrival;
					exe->waiting = exe->turnaround - exe->burst;

					count++;

					for (i = 0; i < max; i++)
					{
						if (p[i]->name == exe->name)
						{
							p[i] = exe;
						}
					}
				}
			}
		}
		else
		{

			period = period + 1;
		}
	}
	int totalturnaround = 0;
	int totalres = 0;
	for (i = 0; i < max; i++)
	{
		totalWaiting = totalWaiting + p[i]->waiting;
		totalturnaround = totalturnaround + p[i]->turnaround;
		totalres = totalres + p[i]->res;
	}
	avgWaiting = totalWaiting / max;
	float avgTT = (float)totalturnaround / max;
	float avgres = (float)totalres / max;
	std::cout << "Average waiting time is  " << avgWaiting << "\n";
	std::cout << "Average Turnaround Time is " << avgTT << "\n";
	std::cout << "Average Response time is " << avgres << "\n";
}
