#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=i;j<5;j++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	if(j==i||i==5||j==1)
	{
	printf("*");
	}
	else
	{
	printf(" ");
	}
	}
	printf("\n");
	}
}	
