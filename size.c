//understand sizeof operator
#include<stdio.h>
#pragma pack(1)
struct stu
{
char g;
int a[30];
int *b[10];
char d[10];
}e;
void main()
{	struct stu r;
//	int *p;
	printf("%ld\n",sizeof(r));
//	int var;
//	printf("%ld\n",sizeof(*p));
//	printf("%ld\n",sizeof(float));
//	printf("%ld\n",sizeof(int));
//	printf("%ld\n",sizeof("nare"));
}
