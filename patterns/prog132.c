#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{
	if((i==1||i==5)&&(j==1||j==5))
	{
	printf("0");
	}
	else if((i==2||i==3||i==4)&&(j==4||j==2||j==3))
	{
	printf("0");
	}
	else
	{
	printf("1");
	}
	}
	printf("\n");
	}
}
