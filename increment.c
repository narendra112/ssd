#include<stdio.h>
void main()
{
	int k=1,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%5d",k++);
		}
		printf("\n");
	}
}
