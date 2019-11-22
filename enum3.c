#include<stdio.h>
void main()
{
	enum month{jan=3,feb,mar,apr,may,june}m1,m2;
	m1=jan;
	printf("%d\n",m1);
	m2 = mar;
	printf("%d\n",m2);
}
