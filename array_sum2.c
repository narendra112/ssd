#include<stdio.h>
void main()
{
int sum=0,i,a[5];
printf("enter any 5 value\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
printf("sum  of elements=%d\n",sum);
}

