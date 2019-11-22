#include<stdio.h>
int product(int n)/*function Definition*/
{
	int multiply=1;
	do
	{
		int rem;
		rem=n%10;
		multiply=multiply*rem;
		n=n/10;
	}
	while(n>0);
	return multiply;
}
int main()
{
	printf("product of number=%d\n",product(143));/*function call*/
	return 0;
}
