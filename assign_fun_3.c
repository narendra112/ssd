#include<stdio.h>
void array(int a[3][3][3],int n);
void main()
{
	int i,j,k,n=3,a[3][3][3];
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("\n");
	array(a,n);
}
void array(int a[3][3][3],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				printf("%d ",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

