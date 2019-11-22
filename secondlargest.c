//find second largest in given array
#include<stdio.h>
void main()
{
	int a[100],max1=0,max2=0,i,n;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	max1=max2==a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]>max1)
	{
	max2=max1;
	max1=a[i];
	}
	else if(a[i]>max2&&a[i]<max1)
	max2=a[i];
	}
	printf("second largest=%d\n",max2);
}
