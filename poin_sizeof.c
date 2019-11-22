#include<stdio.h>
void main(void)
{
	char a='s',*p1=&a;
	int d=10,*p2=&d;
	float c=4.3,*p3=&c;
	double z=3.22,*p4=&z;
	printf("sizeof(p1)=%ld,sizeof(*p1)=%ld\n",sizeof(p1),sizeof(*p2));
	printf("sizeof(p2)=%ld,sizeof(*p2)=%ld\n",sizeof(p2),sizeof(*p2));
	printf("sizeof(p3)=%ld,sizeof(*p3)=%ld\n",sizeof(p3),sizeof(*p3));
	printf("sizeof(p4)=%ld,sizeof(*p4)=%ld\n",sizeof(p4),sizeof(*p4));
}
