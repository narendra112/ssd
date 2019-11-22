//subtraction of 2 no using bitwise
#include<stdio.h>
void main()
{
int x,y;
printf("Enter two numbers\n");
scanf("%d%d",&x,&y);
	while (y != 0)
	{
		int borrow = (~x) & y;
		x = x ^ y;
		y = borrow << 1;
	}
	printf("Subtraction of two numbers=%d\n",x);
}

