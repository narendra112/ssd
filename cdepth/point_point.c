//pointer to  pointer
#include<stdio.h>
void main()
{	
	int a=5;
	int *pa;
	int **ppa;
	pa=&a;
	ppa = &pa;
	printf("%p\n",&a);
	printf("%p\n",pa);
	printf("%d\n",*pa);
	printf("%p\n",&pa);
	printf("%p\n",ppa);
	printf("%p\n",*ppa);
	printf("%d\n",**ppa);
	printf("%p\n",&ppa);
	}
