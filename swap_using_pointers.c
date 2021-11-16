#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

void main()
{
    int num1,num2;
    printf("Enter value of num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
}
