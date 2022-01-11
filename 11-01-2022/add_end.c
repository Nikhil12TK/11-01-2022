#include"header1.h"
void add_end(CSLL **ptr)
{
CSLL *new,*last;
new=(CSLL*)malloc(sizeof(CSLL));
printf("enter the data to be added at end: ");
scanf(" %c",&new->data);
if(*ptr==0)
{
    *ptr=new;
    new->next=new;
}
else
{
last=*ptr;
while(last->next!=*ptr)
{
last=last->next;
}
last->next=new;
new->next=*ptr;
}
}
