#include<stdio.h>
void sub1();
void div1();
void mul1();
void main()
{
	int a,b,sum;
	printf("Enter two values\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Addition =%d\n",sum);
	sub1();
	mul1();
	div1();
}
