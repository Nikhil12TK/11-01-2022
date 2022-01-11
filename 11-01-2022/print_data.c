#include"header1.h"
void print_data(CSLL *ptr)
{
CSLL *headptr=ptr;
if(ptr==0)
{
printf("no record are available to print\n");
return;
}
else
while(ptr->next!=headptr)
{
printf("%c\n",ptr->data);
ptr=ptr->next;
}
