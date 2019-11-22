#include<stdio.h>
void main()
{
	int source[100],i,dst[30],n;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&source[i]);
	}
	for(i=0;i<n;i++)
	{
		dst[i]=source[i];
	}
	printf("After copying");
	for(i=0;i<n;i++)
	{
		printf("%d\n",dst[i]);
	}
}
