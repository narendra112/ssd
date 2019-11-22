//perform bitwise operation 
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter any 2 numbers\n");
	scanf("%d%d",&a,&b);
	printf("And=%d\n",a&b);
	printf("Or=%d\n",a|b);
	printf("Not=%d\n",~a);
	printf("Left shift=%d\n",a<<1);
	printf("Right shift=%d\n",a>>1);
	printf("Xor=%d\n",a^b);
}
