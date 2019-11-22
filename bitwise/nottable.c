#include<stdio.h>
void main()
{
	int a,i,temp;
	printf("NOT table\nA	~(A&b)\n");
	for(i=0;i<=1;i++)
	{
		temp=i;
		a=temp%2;
		printf("%d	%d\n",a,(!a));
	}
}
