#include<stdio.h>
void main()
{
	int a[3][4],i,j,transpose[4][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			transpose[i][j]=a[j][i];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",transpose[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}
