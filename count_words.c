//count number of words in given string
#include<stdio.h>
void main()
{
	int i=0,count;
	char c[100];
	printf("Enter any string\n");
	gets(c);
	count=1;
	while(c[i]!='\0')
	{
		if(c[i]=='\n' || c[i]=='\t' ||c[i]==' ')
		{
			count++;
		}
		i++;
	}
	printf("Number of words in given string =%d\n",count);
}
