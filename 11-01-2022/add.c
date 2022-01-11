#include"headere.h"
void add_begin()
{
SLL *new;
new=(SLL*)malloc(sizeof(SLL));
printf("enter the data to be added at begin: ");
scanf("%d",&new->data);
new->next=0;
headptr=new;
}

