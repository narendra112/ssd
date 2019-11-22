//subtract 2 number without - operator
/*#include<stdio.h>
  void main()
  {
  int num1,num2,sub=0;
  printf("Enter two number\n");
  scanf("%d%d",&num1,&num2);
  sub=~num2;
  sub=sub+1;
  sub=num1+sub;
  printf("Subtract=%d\n",sub);
  }*/
#include<stdio.h>

int main()
{
	int a, b, num1, num2;
	printf("\nEnter First Number:\t");
	scanf("%d", &a);
	printf("\nEnter Second Number:\t");
	scanf("%d", &b);
/*	num1 = a;
	num2 = b;*/
	while (b != 0)
	{
		int borrow = (~a) & b;
		a = a ^ b;
		b = borrow << 1;
	}
	printf("\nSubtraction of Two Numbers %d and %d:\t%d\n", num1, num2, a);
	return 0;
}
