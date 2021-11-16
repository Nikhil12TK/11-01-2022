#include <stdio.h>
#include<stdlib.h>
/*typedef struct queue
{
    int num;
    struct queue *next;
}QUEUE;*/
#define size 5
void enqueue(int *);
void dequeue(int *);
void display(int *);
int top=-1;
void main()
{
    int op,queue[size];
    while(1)
    {
        printf("enter the choice\n");
        printf("1)enqueue 2)dequeue 3)display 4)exit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:if(top>size-1)        
            printf("queue is overflow\n");
            else
            enqueue(queue);
                     break;
            case 2:if(top<=-1)        
            printf("queue is underflow\n");
            else
            dequeue(queue);
            break;
            case 3:
            if(top<=-1)  
            printf("queue is empty\n");
            else
            display(queue);
                   break;
            case 4:exit(1);
            default:printf("wrong choice\n");
        }
    }
    
}
void enqueue(int *q)
{
    int num;
    printf("enter the number to enqueue\n");
    scanf("%d",&num);
    top++;
    q[top]=num;
}
void dequeue(int *q)
{
   int num,i;
   num=q[0];
   for(i=1;i<=top;i++)
   q[i-1]=q[i];
   top--;
   printf("deleted number is:%d\n",num);
}
void display(int *q)
{
    int i=0;
    for(;i<=top;i++)
        printf("%d\n",q[i]);
    }
