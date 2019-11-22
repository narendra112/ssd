#include<stdio.h>
void main()
{
int n=8,i,j,total;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
total=i+j;
if(total%2==0)
printf("*");
else
printf(" ");
}
printf("\n");
}
printf("\n");
}
