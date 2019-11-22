#include<stdio.h>
#include"alphabet_func1.h"
//void alphabet(char ch);
int main()
{
	char ch;
	printf("enter any value\n");
	scanf("%c",&ch);
	alphabet(ch);
}
/*void alphabet(char ch)
{
	if(ch>='A' && ch<='Z')
		printf("Uppercase\n");
	else if (ch>='a' && ch<='z')
		printf("Lowercase\n");
	else
		printf("enter valid input\n");
}*/

