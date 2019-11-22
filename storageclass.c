//program to demonstrate storage class
#include<stdio.h>
int d;
void autox();
void registerx();
void staticx();
void externx();
void main()
{
	autox();
	registerx();
	externx();
	staticx();
}
void autox()
{
	int a=5,i;
	for(i=1;i<=3;i++)
	{
		auto int a=2;
		printf("%d\t",a);
		a++;
	}
	printf("%d\t",a);
	printf("\n");
}
void registerx()
{
	register int a=9;
	for(int i=1;i<=3;i++)
		printf("%d\t",a);
		a++;
	
	printf("\n");
}
void externx()
{
	extern int d;
		printf("%d\t",d);
		d=7;
		printf("%d\n",d);
		
}
void staticx()
{
	static int a=10;
	for(int i=1;i<=3;i++)
	{
		a++;
		printf("%d\t",a);
	}
	printf("\n");
}

