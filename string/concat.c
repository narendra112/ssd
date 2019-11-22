//concatenate two strings
#include<stdio.h>
#include<string.h>
void main()
{	
	char str[100],st[100];
	int i,j;
	printf("Enter any 2  string\n");
	scanf("%s",str);
	scanf("%s",st);
	j=strlen(str);
	for(i=0;st[i]!='\0';i++,j++)
	{
		str[j]=st[i];
	}
	str[j]='\0';
	printf("Concatenate of 2 strings %s\n",str);
}
