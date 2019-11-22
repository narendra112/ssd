#include<stdio.h>
void star ();
void main()
{
star();
}
void star()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(j=10;j>2*i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
