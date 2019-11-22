#include<stdio.h>
void main()
{
	int arr[20],i,n,max1=0,max2=0;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i] > max1)
		{
			max1 = arr[i];
		}
		else if(arr[i] > max2 && arr[i] < max1)
		{
			max2 = arr[i];
		}
	}

	printf("First largest = %d\n", max1);
	printf("Second largest = %d\n", max2);

}

