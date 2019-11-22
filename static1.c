#include<stdio.h>
void main()
{
static int i=5;
if(--i)
{
printf("%d\n",i);
main(10);
}
}
