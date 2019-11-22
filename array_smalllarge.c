#include<stdio.h>
void main()
{
int a[10]={1,2,3,4,5,6,6,6,7,8},i,small,large;
small=large=a[0];
for(i=0;i<10;i++)
{
if(a[i]<small)
{
small=a[i];
}
if(a[i]>large)
{
large=a[i];
}
}
printf("small=%d large=%d",small,large);
}
