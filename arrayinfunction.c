#include<stdio.h>
void add(int a[],int n);
void main()
{
int a[5]={1,2,3,4,5};
int b[7]={1,2,3,4,1,2,1};
printf("sum of addition of a=%d\n",add(a,5));
printf("sum of addition of b=%d\n",add(b,7));
}
void add(int a[],int n)
{
int i,sum=0;
for(i=0;i,n;i++)
sum=sum+a[i];
}
