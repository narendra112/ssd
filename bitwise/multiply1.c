#include<stdio.h>
void main()
{
	int res=0,a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	while (b > 0) 
	{ 
		if (b & 1) 
		res = res + a; 
		a = a << 1; 
		b = b >> 1; 
	} 
	printf("Multiply=%d\n",res);
}
