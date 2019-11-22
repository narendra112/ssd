#include<stdio.h>
void main()
{
	int temp,n,i,j,a[10];
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter elements of an array\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before swapping\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		temp=a[i];
		for(j=i ; j>0 && temp<a[j-1] ; j--)
		{	
			a[j] = a[j-1]; 
		}
		a[j]=temp;
	}	
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
