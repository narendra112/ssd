#include<stdio.h>
void main()
{
int i,j,arr[10]={1,1,2,2,3,3,4,4,5,5},temp;
for(i=0,j=9;i<j;i++,j--)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
printf("reversed array are:");
for(i=0;i<10;i++)
printf("%d\t",arr[i]);
}

