#include<stdio.h>
union dg
{
int a;
int d;
};
void main()
{
union dg b;
b.a=0xab;
b.d=4;
int k;
k=b.a+b.d;
printf("Value=%d\n",k);
}
