#include"header1.h"
void add_begin(CSLL **ptr)
{
CSLL *new,*last;
new=(CSLL*)malloc(sizeof(CSLL));
printf("enter the data to be added at begin: ");
scanf(" %c",&new->data);
if(*ptr==0)
{
    *ptr=new;
   new->next=*ptr;
}
else
{
    last=*ptr;
while(last->next!=*ptr)
    last=last->next;
new->next=*ptr;
last->next=new;
*ptr=new;
}
}
