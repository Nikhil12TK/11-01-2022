#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
char data;
struct student *next;
}CSLL;
CSLL *headptr=0;
extern void add_begin(CSLL **ptr);
extern void print_data(CSLL *ptr);
extern void add_middle();
extern void add_end(CSLL **ptr);
extern void delete_all(CSLL **ptr)
