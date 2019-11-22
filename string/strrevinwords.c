#include<stdio.h>
#include<string.h>
void main()
{
	char a[9]="abcdefgh";
	int i;
	i=strlen(a)-1;
	while(i>=strlen(a)-2)
	{
		printf("%c",a[i]);
		i--;
	}
	i=1;
	while(i>=0)
	{
		printf("%c",a[i]);
		i--;
	}
	i=strlen(a)-3;
	while(i>1)
	{
		printf("%c",a[i]);
		i--;
	}
	printf("\n");
}
