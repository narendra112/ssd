#include<stdio.h>
void main()
{
	int i,j,diff,value;
	diff=1;
	value=1;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
	printf("%-3d",value);
	value+=diff;
	diff++;
	}
	printf("\n");
	}
}

