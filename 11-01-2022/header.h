#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
int data;
struct student *next;
}SLL;
SLL *headptr=0;
extern void add_begin();
extern void add_middl();
extern void add_end();
extern void print_data();
