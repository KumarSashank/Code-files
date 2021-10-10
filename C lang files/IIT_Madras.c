#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Candidate
{
  char name[30];
  int age;
  int Physics;
  int Chemistry;
  int Maths;
  int Total;
  char Reference[10];
  char Shortlisted[3];
};

struct Swap
{
  char name[30];
  int age;
  int Physics;
  int Chemistry;
  int Maths;
  int Total;
  char Reference[10];
  char Shortlisted[3];
};
int i,j,n,k;
char q[10];

int main()
{
    struct Candidate cand[1000];
    struct Swap sw;
    
    printf("\nenter students number\n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Candidate %d:",i+1);
        printf("\n Enter name of the candidate:");
        scanf("%s",cand[i].name);
        printf("\n Enter the age of candidate:");
        scanf("%d",&cand[i].age);
        printf("\n Enter the physics marks of candidate:");
        scanf("%d",&cand[i].Physics);
        printf("\n Enter the Chemistry marks of candidate:");
        scanf("%d",&cand[i].Chemistry);
        printf("\n Enter the maths marks of candidate:");
        scanf("%d",&cand[i].Maths);
        cand[i].Total=cand[i].Maths+cand[i].Chemistry+cand[i].Physics;
    }
    for (i = 0 ; i < n - 1; i++)
    {
       for (j = 0 ; j < n - i - 1; j++)
       {
           if (cand[j].Total < cand[j+1].Total) /* For decreasing order use '<' instead of '>' */
           {
              sw.name[30]  = cand[j].name[30];
              sw.Chemistry = cand[j].Chemistry;
              sw.Physics = cand[j].Physics;
              sw.Maths = cand[j].Maths;
              sw.age = cand[j].age;
              sw.Total= cand[j].Total;

              cand[j].name[30] = cand[j+1].name[30];
              cand[j].Chemistry = cand[j+1].Chemistry;
              cand[j].Physics = cand[j+1].Physics;
              cand[j].Maths=cand[j+1].Maths;
              cand[j].age = cand[j+1].age;
              cand[j].Total= cand[j+1].Total;
              
              cand[j+1].name[30] =sw.name[30];
              cand[j+1].age=sw.age;
              cand[j+1].Chemistry=sw.Chemistry;
              cand[j+1].Physics=sw.Physics;
              cand[j+1].Maths=sw.Maths;
              cand[j+1].Total=sw.Total;
           }
       }
    }
    k=((cand[0].Total-10)/10)*10;
    printf("No.Name\tAge\tTotal\n");
    for(i=0;i<n;i++)
    {
        printf("%d.",i+1);
        printf("%s",cand[i].name);
        printf("\t%d",cand[i].age);
        printf("\t%d\n",cand[i].Total);
    }
    

}