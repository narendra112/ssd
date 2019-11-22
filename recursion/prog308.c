//Write a C program to print all natural numbers between 1 to n using recursion.
#include<stdio.h>
int natural(int lower,int upper);
void main()
{
	int lower,upper,number;
	printf("Enter lower limit\n");
	scanf("%d",&lower);
	printf("Enter upper limit\n");
	scanf("%d",&upper);
 	natural(lower,upper);
	//printf("%d\t",number);
}

int natural(int lower,int upper)
{
	if(lower>upper)
		return ;
	printf("%d,",lower);
	return (natural(lower+1,upper));
}
