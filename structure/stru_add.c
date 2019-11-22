#include<stdio.h>
struct 
{
	int a;
	char b;
	long int c;
	long double s;
	}k;
void main()
{

printf("%ld\n",sizeof(k));
printf("%ld\n",sizeof(k.a));
printf("%ld\n",sizeof(k.b));
printf("%ld\n",sizeof(k.c));
printf("%p\n",&(k));
printf("%p\n",&(k.a));
printf("%p\n",&(k.b));
printf("%p\n",&(k.c));
printf("%p\n",&k.s);
}

