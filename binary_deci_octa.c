#include<stdio.h>
void convert(int,int);
void main()
{
	int num;
	printf("Enter any number to convert\n");
	scanf("%d",&num);
	convert(num,2);
	printf("\n");
	convert(num,10);
	printf("\n");
	convert(num,16);
	printf("\n");
}
void convert(int num,int n)
{
	int rem=num%n;
	if(num==0)
		return ;
	convert(num/n,n);
	if(rem<10)
		printf("%d",rem);
	else
		printf("%c",rem-10+'A');
}
