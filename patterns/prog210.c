#include<stdio.h>
void main()
{
	int i,j;
	for(i=5/2;i<=5;i+=2)
	{
	for(j=1;j<=5-i;j+=2)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	for(j=1;j<=5-i;j++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
	}
	for(i=5;i>=1;i--)
	{
	for(j=5;j>=i;j--)
	{
	printf(" ");
	}
	for(j=1;j<=2*i-1;j++)
	{
	printf("*");
	}
	printf("\n");
	}
}
