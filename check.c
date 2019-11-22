#include<stdio.h>
//#pragma pack(2)
struct s
{
int a;
int *b;
}__attribute__((packed));
void main()
{
struct s p;
printf("%ld\n",sizeof(p));
}
