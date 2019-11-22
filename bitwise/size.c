#include<stdio.h>
struct a
{
	double d;
	char b[11];
	int e;
}f;
void main()
{
	struct a;
	printf("%ld\n",sizeof(f));
}
