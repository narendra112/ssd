//addition of two  number  using bitwise 
#include<stdio.h>
void main(void)
{
	int x,y,carry;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	while (y != 0)
	{
		carry = x & y;
		x = x ^ y; 
		y = carry << 1;
	}
	printf("addition of two numbers=%d\n",x);
}

