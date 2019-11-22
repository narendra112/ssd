//Write a C program to find sum of elements of array using recursion.
#include<stdio.h>
int sum (int a[],int start,int end );
void main()
{
	int n,sumof,a[100];
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sumof=sum(a,0,n);
	printf("Sum of array=%d",sumof);

}
int sum(int a[],int start,int end)
{
if(start>=end)
return 0;
return (a[start]+sum(a,start+1,end));
}
