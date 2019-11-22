//program for storing address in pointers
#include<stdio.h>
void main()
{
int a=10,p1=&a,*p2,*p3;
int b;
//`p1=&a;
a=*p1;
printf("%d  %p  %p \n",p1,p2,p3);
printf("%d  %d  %d\n",*p1,*p2,*p3);
}

