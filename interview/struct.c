#include<stdio.h>
struct stu
{
unsigned char c1:1;
unsigned int :0;
unsigned  char c2:3;
unsigned char c3:4;
}a;
void main()
{
printf("%ld\n",sizeof(a));
}

