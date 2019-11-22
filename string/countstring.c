//program to find length of string
#include<stdio.h>
void main()
{
	char str[100];
	int count,i;
	printf("Enter any string\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
	count++;
	}
	printf("Length of string=%d\n",count);
}
