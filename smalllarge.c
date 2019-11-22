#include<stdio.h>
void main()
{
int a[5]={1,2,3,4,5},i,large,second;
second=large=a[0];
for(i=0;i<5;i++)
{
 if(a[i]>large)
 {
 second=large;
large=a[i];
}
else if (a[i]>second && a[i]<large)
second=a[i];
}
printf("second=%d\n",second);
}
