#include<stdio.h>
void main()
{
	unsigned int x=0x0a0b0c0d;
	char *p=(char *)&x;
	if(*p==0x0a)
	{
		printf("Big endian machine\n");
	}
	else
	{
		printf("Little endian machine\n");
	}
}
