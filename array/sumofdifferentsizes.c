//to find sum of different array size
#include<stdio.h>
int func(int a[],int n);
void main()
{
	int a[5]={1,2,3,4,5};
	int b[6]={1,2,3,4,5,6};
	int c[7]={1,2,3,4,5,6,7};
	printf("Sum of array=%d\n",func(a,5));
	printf("Sum of array=%d\n",func(b,6));
	printf("Sum of array=%d\n",func(c,7));
}
int func(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	sum+=a[i];
	return sum;
}
