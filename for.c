#include<stdio.h>
void main()
{
int volatile i=1,j=1;
for(;i<=5;i++)
{
for(;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}

