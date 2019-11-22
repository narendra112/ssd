//print 3d array elements using pointer
#include<stdio.h>
void main()
{
	int a[2][3][2]={{{1,2},{2,4},{6,7}},{{2,3},{4,5},{1,2}}};
	int i,j,k;
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	for(k=0;k<2;k++)
	{
	printf("%d\n",(*(*(*(a+i)+j)+k)));
	}
	printf("\n");
	}
	}
}
