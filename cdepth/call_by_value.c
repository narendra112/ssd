//call by  value
#include<stdio.h>
void val(int a,int b);
void main()
{
	int a=3,b=5;
	printf("%d  %d\n",a,b);
	val(a,b);
	printf("%d  %d\n",a,b);
}
void val(int a,int b)
{
	a++;
	b++;
	printf("%d  %d\n",a,b);
}
