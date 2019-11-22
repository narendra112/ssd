#include<stdio.h>
void main()
{
	int a[3],b[3],i,c[3],k,j;
	printf("enter any 3 value of a\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter any 3 values of b\n");
	for(k=0;k<3;k++)
	{
		scanf("%d",&b[k]);
	}
	printf("addition of array are\n");
	for(j=0;j<3;j++)
	{
		c[j]=a[j]+b[j];
		     printf("%d\n",c[j]);
	}
}
