#include<stdio.h>
void main()
{
	int a[20],i,n,sum=0;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d\n",sum);
}
