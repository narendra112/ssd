//writ a c program to multiply 3 numbers using return
#include<stdio.h>
int mul(int);
void main()
{
	int d,m;
	m=mul(d);
	printf("Multiplication=%d\n",m);
}
int mul(int d)
{
	int a,b,c;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	return d;
}
