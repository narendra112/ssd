#include<stdio.h>
void main()
{
int n,c1=0,c2=0,i;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<8;i++)
{
if(n & 0X01 << i)
{
c1++;
}
else
{
c2++;
}
}
printf("%d\n %d\n",c1,c2);
}
