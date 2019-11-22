#include<stdio.h>
void main()
{
int arr[10],i;
for(i=0;i<10;i++)
{
printf("enter array value of arr[%d]:",i);
scanf("%d",&arr[i]);
}
printf("the array elements are:");
for(i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}
}
