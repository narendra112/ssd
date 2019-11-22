#include<stdio.h>
void main()
{
	int a[100],i,n,min,max;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[1];
	max=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Minimum=%d\n",min);
	printf("Maximum=%d\n",max);
}
