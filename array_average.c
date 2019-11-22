#include<stdio.h>
void main()
{
int sum=0,i,a[5],average;
printf("enter any 5 value\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
average=sum/5;
printf("average of elements=%d\n",average);
}


