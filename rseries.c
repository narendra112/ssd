#include<stdio.h>
int rseries(int n);
void main()
{
	int n;
	printf("Enter any number to find series\n");
	scanf("%d",&n);
	printf("Sum=%d\n",rseries(n));
}
int rseries(int n)
{
	if(n==0)
		return 0;
	return (n+rseries(n-1));
//	printf("%d + ",n);
}
