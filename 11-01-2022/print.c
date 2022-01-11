#include"header.h"
void print_data()
{
SLL *ptr;
ptr=headptr;
if(ptr==0)
{
printf("no record are available to print:\n");
return;
}
while(ptr)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}

