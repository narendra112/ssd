#include<stdio.h>
struct data
{
	int a;
	char b;
	float c;
};
struct dd
{
	int a;
	double b;
	char v;
	struct c
	{
	int g;
	float h;
	struct data time;
	struct data hh;
	}h;
}k;
void main()
{
printf("%ld\n",sizeof(k));
}
