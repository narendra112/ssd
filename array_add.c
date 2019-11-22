#include<stdio.h>
void main()
{
int arr[10],i,sum=0;
for(i=0;i<10;i++)
{
printf("enter a val for arr[%d]:",i);
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("sum of number=%d\n",sum);
}

