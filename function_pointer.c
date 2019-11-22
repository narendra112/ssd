//function in pointer
#include<stdio.h>
void display(int a)
{
	printf("Value of a=%d\n",a);
}
void main()
{
	void (*display_a)(int)=&display;
	(*display)(10);
}
