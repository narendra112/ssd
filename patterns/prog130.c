/*pattern
11011
11011
00000
11011
11011*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{
	if(i==3||j==3)
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
