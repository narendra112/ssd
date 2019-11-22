#include<stdio.h>
void main()
{
	int a[3],b[3],c[3],i;
	printf("enter elements of a array\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements of b array\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("addition of two array\n");
	for(i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\t",c[i]);
	}
}

