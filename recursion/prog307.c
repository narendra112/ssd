//Write a C program to find power of any number using recursion.
#include<stdio.h>
double power(int,int);
void main()
{
	double base,pow;
	int expo;
	printf("Enter base\n");
	scanf("%lf",&base);
	printf("Enter power\n");
	scanf("%d",&expo);
	pow=power(base,expo);
	printf("%lf^%d=%lf",base,expo,pow);
}
double power(int base,int expo)
{
	if(expo==0)
		return 1;
	else
		return base*power(base,expo-1);
}
