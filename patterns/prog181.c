#include<stdio.h>
void main()
{
	int i,j;
	printf("*\n");
	for(i=1;i<=5;i++)
	{
		printf("*");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("*");
		printf("\n");
	}
	for(i=5-1;i>=1;i--)
	{
		printf("*");
		for(j=1;j<i;j++)
		{
			printf("%d",j);
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("*");
		printf("\n");
	}
	printf("*");

}

