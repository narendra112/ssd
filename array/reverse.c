/*//reverse elements of array
#include<stdio.h>
void main()
{
	int a[8],i;
	printf("Enter elements of array\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Reversed elements are\n");
	for(i=7;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}*/
#include<stdio.h>
void main()
{
	int a[10]={1,2,3,4,5,6,1,2,3,2},i,j,temp;
	printf("Enter value of array\n");
	for(i=0,j=9;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("After reverse\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
}
