#include<stdio.h>
void func(int val[]);
int main()
{
int i,a[5]={1,2,3,4,5};
func(a);
printf("contents of array:");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
void func(int val[])
{
int sum=0,i;
for(i=0;i<5;i++)
{
val[i]=val[i]*val[i];
sum+=val[i];
}
printf("sum of square=%d\n",sum);
}


