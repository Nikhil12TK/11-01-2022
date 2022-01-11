#include"header.h"
void main()
{
//SLL *headptr=0;
int op;
while(1)
{
printf("enter choice\n");
printf("1)add_begin \n2)add_middle \n3)add_end \n4)print_data \n5)exit\n");
scanf("%d",&op);
switch(op)
{
case 1:add_begin();
        break;
case 2:add_middle();
        break;
case 3:add_end();
        break;
case 4:print_data();
        break;
case 5:exit(0);
    break;
default:printf("wrong choice\n");
}
}
}

