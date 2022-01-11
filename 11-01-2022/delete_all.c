#include"header.h"
void delete_all(CSLL **ptr)
{
    CSLL *del,*temp;
    if(*ptr==0)
    {
        printf("no records available to delete\n");
        return;
    }
    temp=del=*ptr;
    while(del->next!=temp)
    {
        (*ptr)=(*ptr)->next;
        free(del);
        //printf("node num:%d\n",i);
        del=*ptr;
    }
    *ptr=0;
}
