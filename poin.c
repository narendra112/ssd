#include<stdio.h>
void main(void)
{
	char a=10;
	float b=4.5;
	int *p1=&a;
	float *p2=&b;
	printf("Value of p1=address of a=%p\n",p1);
	printf("Value of p2=address of b=%p\n",p2);
	printf("Address of p1=%p\n",&p1);
	printf("Address of p2=%p\n",&p2);
	printf("value of a=%d  %d  %d\n",a,*p1,*(&p1));
	printf("value of b=%.1f  %.1f  %.1f\n",b,*p2,*(&p2));
}
