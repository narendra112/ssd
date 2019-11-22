//c program for passing 2d array elements and in functions 
#include<stdio.h>
void array(int a[100][100],int row,int col);
void main()
{
	int row,col,a[100][100],i,j;
	printf("Enter array size\n");
	scanf("%d %d",&row,&col);
	printf("Enter array elements\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements entered =\n");
	array(a,row,col);
}

	void array(int a[100][100],int row,int col)
	{
		int i,j;
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
