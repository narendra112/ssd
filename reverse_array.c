#include<stdio.h>
void main()
{
int a[100],n,i;
printf("Enter array size\n");
scanf("%d",&n);
printf("Enter elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Reversed array is\n");
for(i=n-1;i>=0;i--)
{
printf("%d\n",a[i]);
}
}
