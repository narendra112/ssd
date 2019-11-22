#include<stdio.h>
int main()
{
char *p;
char a=10;
p=&a;
*p=20;
printf("%d\n",*p);
}

