//perform and table
#include<stdio.h>
void main()
{
	int a,b,i,temp;
	printf("A	B	Output\n");
	for(i=0;i<4;i++)
	{
		temp=i;
		a=temp/2;
		b=temp%2;
		printf("%d	%d	%d\n",a,b,~(a|b));
	}
}
