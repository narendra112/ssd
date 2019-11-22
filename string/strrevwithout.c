//program for reverse a string
#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,len;
	char str[100];
	printf("Enter string\n");
	scanf("%s",str);
	len=strlen(str);
	for(i=len;i>=0;i--)
	{
	printf("%c",str[i]);
	}
}
