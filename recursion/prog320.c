//Write a C program to display all array elements using recursion.
#include<stdio.h>
int array(int a[100],int start,int len);
void main()
{
	int a[100],i,n;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements of array\n");
	array(a,0,n);
}
int array(int a[100],int start,int len)
{
	if(start>=len)
		return 1;
	printf("%d\t",a[start]);
	array(a,start+1,len);
}
