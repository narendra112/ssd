#include<stdio.h>
void alphabet(char ch)
{
	if(ch>='A' && ch<='Z')
		printf("Uppercase\n");
	else if (ch>='a' && ch<='z')
		printf("Lowercase\n");
	else
		printf("enter valid input\n");
}

