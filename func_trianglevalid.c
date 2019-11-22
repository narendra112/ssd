#include<stdio.h>
void triangle(int a,int b,int c);//function declaration
void arith(int a,int b,int c);
int main()
{
int a,b,c;
printf("enter three numbers\n");
scanf("%d %d %d",&a,&b,&c);
triangle(a,b,c);//function call
arith(a,b,c);
return 0;
}
void triangle(int a,int b,int c)//function definition
{
if(a==b &&b==c)
printf("equilateral\n");
else if(a==b || b==c||c==a)
printf("isosceles\n");
else
printf("scalene\n");
}
void arith(int a,int b,int c)
{
int add,sub,mul,div;
printf("sum=%d\n",a+b+c);
/*sub=a-b;
mul=a*b;
div=a/b;*/
}
