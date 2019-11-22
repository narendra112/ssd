#include<stdio.h>
void main()
{
	int num1,num2,m;
	printf("Enter any number\n");
	scanf("%d",&num1);
	m=num1++ + ++num1;
	printf("%d",m);
//	getch();
}
