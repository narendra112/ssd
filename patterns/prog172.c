#include<stdio.h>
void main()
{
	int i,j,diff,value;
	for(i=1;i<=5;i++)
	{
	diff=5-1;
	value=i;
	for(j=1;j<=i;j++)
	{
	printf("%3d",value);
	value+=diff;
	diff--;
	}
	printf("\n");
	}
}
