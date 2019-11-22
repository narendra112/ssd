#include<stdio.h>
void triangle(int a,int b,int c)
{
if((a==b)&&(b==c)&&(a==c))
printf("Equilateral\n");
else if((a==b)||(b==c)||(a==c))
printf("Isosceles\n");
else
printf("Scalene\n");
}
int main()
{
	int a,b,c;
	printf("Enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
	triangle(a,b,c);
}
