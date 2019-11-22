#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5*2-1;i++)
	{
	if(i==5)
	{
	for(j=1;j<=5*2-1;j++)
	{
	printf("+");
	}
	}
	else
	{
	for(j=1;j<=5-1;j++)
	{
	printf(" ");
	}
	printf("+");
	}
	printf("\n");
	}

}
