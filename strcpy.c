#include<stdio.h> 
void copystr(char*,char*); 
void main() 
{ 
             char*str1="I am nikhil"; 
             char str2[30];
             int c=0; 
             copystr(str2,str1); 
             printf("\n %s\n",str2); 
          for(int i=0;*(str2+i)!='\0';i++)
          c++;
          printf("the length of second string is :%d\n",c);
} 
            void copystr(char *dest,char *src) 
       { 
                while(*src!='\0') 
                *dest++=*src++; 
                *dest='\0'; 
       }
