#include<stdio.h>
struct a
{
	int g;
	int h;
};
struct b
{
	double d[20];
	char e;
	struct a date;
}k;
void main()
{
	printf("size of structure=%ld\n",sizeof(k.d));
}
