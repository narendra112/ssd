//Write a C program to find maximum and minimum elements in array using recursion
#include<stdio.h>
int maximum(int a[],int index,int len);
int minimum(int a[],int index,int len);
void main()
{
	int a[100],i,n,min,max;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=maximum(a,0,n);
	min=minimum(a,0,n);
	printf("Maximum of array elements=%d\n",max);
	printf("Minimum of array elements=%d\n",min);
}

int maximum(int a[],int index,int len)
{
	int max;
	if(index>=len-2)
		return (a[index]>a[index+1])?a[index]:a[index+1];
	max=maximum(a,index+1,len);
	return (a[index]>max)?a[index]:max;
}
int minimum(int a[],int index,int len)
{
	int min;
	if(index>=len-2)
		return(a[index]<a[index+1])?a[index]:a[index+1];
	min=minimum(a,index+1,len);
	return(a[index]<a[index+1])?a[index]:a[index+1];
}
