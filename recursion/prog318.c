//Write a C program to find LCM of two numbers using recursion.
#include<stdio.h>
int lcm(int num1,int num2);
void main()
{
	int num1,num2,LCM;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
		LCM=lcm(num1,num2);
	else
		LCM=lcm(num2,num1);
	printf("LCM of two numbers=%d\n",LCM);
}
int lcm(int num1,int num2)
{
	static int m=0;
	m+=num1;
	if((m%num1==0)&&(m%num2==0))
		return m;
	else
		return (lcm(num2,num1));
}
