#include<stdio.h>
void main()
{
	int a[100],i,n,count;
printf("Enter size of array\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
count=0;
for(i=0;i<n;i++)
{
if(a[i]<0)
{
count++;
}
}
printf("count of negative value are=%d\n",count);
}
