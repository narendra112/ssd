#include<stdio.h>
void func(int a[10][10],int i,int j);
void main()
{
	int i,j,a[10][10],n,row,col;
	printf("enter array size\n");
	scanf("%d%d",&row,&col);
	printf("enter elements of array\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
		}
		func(a,row,col);
	
}
void func(int a[10][10],int i,int j)
{
	int n,k;
	for(n=0;n<i;n++)
	{
		for(k=0;k<j;k++)
		{
			printf("%d\t",a[n][k]);
		}
		printf("\n");
	}
}
