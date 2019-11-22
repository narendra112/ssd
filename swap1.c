#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
/*	a=a^b;
	b=a^b;
	a=a^b;*/
/*	a=a+b;
	b=a-b;
	a=a-b;*/
/*	a=a*b;
	b=a/b;
	a=a/b;
*//*a=((a*b)/(b=a));*/
a=((a+b)-(b=a));
	printf("A=%d\n",a);
	printf("B=%d\n",b);
}
