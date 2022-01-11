#include"header1.h"
void add_middle()
{
CSLL **ptr,*new,*last;
ptr=&headptr;
new=(CSLL*)malloc(sizeof(CSLL));
printf("enter the data to be added at middle: ");
scanf(" %c",&new->data);
if(*ptr==0 ||(new->data<(*ptr)->data))
{
    
new->next=*ptr;
*ptr=new;
}
else
{
last=*ptr;
while((last->next!=*ptr)&&(last->next->data<new->data))
last=last->next;
new->next=last->next;
last->next=new;
}
}
