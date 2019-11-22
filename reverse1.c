#include<stdio.h>
void main()
{
	char a[]="narendra",*ptr;
	ptr=a;
	while(*ptr!='\0')
		ptr++;
	while(*(ptr-1)!='\0')
	{	
		printf("%c",*(ptr-1));
		ptr--;
	}
}
