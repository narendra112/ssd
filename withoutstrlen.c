#include<stdio.h>
void main()
{
	char str[10];
	char *p=str;
	int count=0;
	printf("Enter any string\n");
	scanf("%s",str);
	while(*p!='\0')
	{
		count++;
		p++;
	}
	printf("Length of string=%d\n",count);

}
