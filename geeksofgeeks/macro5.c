#include<stdio.h>
#define square(x) {return x*x}
int main()
{
int x;
x=36/square(6);
printf("%d\n",x);
}
