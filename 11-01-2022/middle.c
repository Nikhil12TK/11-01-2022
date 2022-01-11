#include"header.h"
void add_middle()
{
SLL **ptr,*new,*last;
ptr=&headptr;
new=(SLL*)malloc(sizeof(SLL));
printf("enter the data to be added at middle: ");
scanf("%d",&new->data);
if(*ptr==0 ||(new->data<(*ptr)->data))
{
new->next=*ptr;
*ptr=new;
}
else
{
last=*ptr;
while((last->next!=0)&&(last->next->data<new->data))
last=last->next;
new->next=last->next;
last->next=new;
}
}

