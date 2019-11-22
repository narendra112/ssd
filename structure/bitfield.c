#include<stdio.h>
struct test
{
	int a[20];
};
void main()
{
	struct test l;
	printf("size of structure=%ld\n",sizeof(l));
}
