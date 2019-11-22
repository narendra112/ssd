//interchange using comma operator
#include<stdio.h>
void main()
{
	int a=7,b=3,temp;
	temp=a,a=b,b=temp;
	printf("a=%d b=%d",a,b);
}
