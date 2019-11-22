#include<stdio.h>
#define macro(a,str) {\
	printf("%d is %s number",a,str);\
	printf("\n");\
}
void main()
{
	int num;
	printf("Enter any number to check odd or even\n");
	scanf("%d",&num);
	if(num & 1)
	{
		macro(num,"odd");
		}
	
	else

		macro(num,"even");
}
