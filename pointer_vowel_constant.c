//C program to find vowels and consonants in a string using pointer.
#include<stdio.h>
void main()
{
	char b[10];
	char *p;
	printf("Enter any string to find vowel or cosonant\n");
	scanf("%s",b);
	p=b;
	if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
	{
		printf("Given string is Vowel\n");
	}
	else
	{
		printf("Given string is consonant\n");
	}
}

