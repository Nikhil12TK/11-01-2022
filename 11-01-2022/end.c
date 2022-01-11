#include"header.h"
void add_end()
{
SLL *new,*last;
new=(SLL*)malloc(sizeof(SLL));
printf("enter the data to be added at end: ");
scanf("%d",&new->data);
new->next=0;
if(headptr==0)
headptr=new;
else
{
last=headptr;
while(last->next)
last=last->next;
last->next=new;
}

