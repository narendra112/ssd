/*
12345
23456
34567
45678
56789*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=i;j<i+5;j++)
	{
	printf("%d",j);
	}
	printf("\n");
	}
}
