#include<stdio.h>
void main()
{
	int product=0,num1,num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	while(num2!=0)
	{
	product=product+num1;
	num2--;
	}
	printf("Product of two number=%d\n",product);
}

