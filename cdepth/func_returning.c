//returning more than one value from a function using call by reference
#include<stdio.h>
void func(int a,int b,int *ps,int *pd,int *pp);
int main()
{
	int a=5,b=6,sum,diff,prod;
	func(a,b,&sum,&diff,&prod);
	printf("Sum=%d Difference=%d Product=%d\n",sum,diff,prod);
}
void func(int a,int b,int *ps,int *pd,int *pp)
{
*ps=a+b;
*pd=a-b;
*pp=a*b;
}
