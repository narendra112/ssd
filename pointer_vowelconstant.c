//C program to count vowels and consonants in a string using pointer.
#include<stdio.h>
void main()
{
	char b[100];
	char *p;
	int v,c;
	printf("Enter any string to find vowel or cosonant\n");
	gets(b);
	p=b;
	c=v=0;
	while(*p!='\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
		{
			v++;
		}
		else
		{
			c++;
		}
	*p++;
	}
	printf("Vowel=%d\nconsonant=%d\n",v,c);
}
