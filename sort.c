#include<stdio.h>
void main()
{
	int a[100],n,i,j,temp;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting arrays are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
