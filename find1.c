#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(k==1)
			{
				printf("1");
				k=0;
			}
			else
			{
			printf("0");
			k=1;
			}
		}
		printf("\n");
	}
}
