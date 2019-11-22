#include<stdio.h>
void func(int);
void main()
{
func(3);
func(2);
}
void func(int a)
{
int b=10;
static int c=5;
b=b+a;
c=c+a;
printf("%d\t%d\n",b,c);
}
