#include<stdio.h>
#define row1 3
#define coloumn1 4
#define row2 4
#define coloumn2 2
void main()
{
	int a[row1][coloumn1],b[row2][coloumn2],multiply[row1][coloumn2],i,j,k;
	printf("enter elements of a\n");//elements of a
	for(i=0;i<row1;i++)
	{
		for(j=0;j<coloumn1;j++)
		{
			scanf("%d",&a[i][j]);
//			printf(" ");
		}
//			printf("\n");
	}
	printf("enter elements of b array\n");//elements of b
	for(i=0;i<row2;i++)
	{
		for(j=0;j<coloumn2;j++)
		{
			scanf("%d",&b[i][j]);
		//	printf("\t");
		}
		
	}
	for(i=0;i<row1;i++)//performing multiplication
	{
		for(j=0;j<coloumn2;j++)
		{	
			multiply[i][j]=0;
			for(k=0;k<coloumn1;k++)
			multiply[i][j]+=a[i][k]*b[k][j];
		}
	}

	printf("addition of elements\n");//multiplication of elements
	for(i=0;i<row1;i++)
	{
		for(j=0;j<coloumn2;j++)
		{
			printf("%d",multiply[i][j]);
			printf(" ");
		} 
		printf("\n");
	}
}
