#include<stdio.h>
void main()
{
	int a[100],i,j,count=0,n;
	printf("Enter the array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				break;
			}
		}
	}
	printf("Total no of duplicate elements=%d\n",count);
}

