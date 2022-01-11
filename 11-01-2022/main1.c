#include"header1.h"
void main()
{
//SLL *headptr=0;
int op;
while(1)
{
printf("enter choice\n");
printf("1)add_begin \n2)add_middle \n3)add_end \n4)print_data \n5)delete_all \n6)exit\n");
scanf("%d",&op);
switch(op)
{
case 1:add_begin(&headptr);
        break;
case 2:add_middle();
        break;
case 3:add_end(&headptr);
        break;
case 4:print_data(headptr);
        break;
case 5:delete_all(&headptr);
    break;
//case 6:delete_begin(headptr);
   // break;
//case 7:delete_end(headptr);
    //break;
case 6:exit(0);
default:printf("wrong choice\n");
}
}
}
