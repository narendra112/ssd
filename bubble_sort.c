#include<stdio.h>
void main()
{
int a[50],i,temp,j,n;
printf("enter array value\n");
scanf("%d",&n);
printf("enter array element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]<a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
