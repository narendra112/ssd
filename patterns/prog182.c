#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
	printf(" ");
	}
	printf("%d",i);
	for(j=1;j<=(5-i)*2-1;j++)
	{
	printf(" ");
	}
	if(i!=5)
	{
	printf("%d",i);
	}
	printf("\n");
	}
	for(i=5-1;i>=1;i--)
	{
	for(j=1;j<=i;j++)
	{
	printf(" ");
	}
	printf("%d",i);
	for(j=1;j<=(5-i)*2-1;j++)
	{
	printf(" ");
	}
	if(i!=5)
	{
	printf("%d",i);
	}
	printf("\n");
	}
}
	
