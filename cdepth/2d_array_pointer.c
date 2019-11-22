//program to print values of 2d array using pointer
#include <stdio.h>
void main()
{
	int a[3][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4}},i;
	for(i=0;i<3;i++)
	{
		printf("Address of %d array=%p %p\n",i,a[i],*(a+i));
	for(int j=0;j<4;j++)
	{
		printf("%d %d ",a[i][j],(*(*(a+i)+j)));
	}
	printf("\n");
	}
}
