#include<stdio.h>
void add(int a,int b)
{
int d;
d=a+b;
printf("Addition=%d\n",d);
}
void subtract(int a,int b)
{
int d;
d=a-b;
printf("Subtraction=%d\n",d);
}
void division(int a,int b)
{
float d;
d=a/b;
printf("Division=%f\n",d);
}
void multiplication(int a,int b)
{
int d;
d=a*b;
printf("Multiplication=%d\n",d);
}
void main()
{
void (*fun[])(int,int)={add,subtract,division,multiplication};
unsigned int ch,a=10,b=20;
printf("Enter which operation to perform\n");
printf("1.Addition\n2.Subtract\n3.Division\n4.Multiplication\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
(*fun[1])(a,b);
break;
case 2:
(*fun[2])(a,b);
break;
case 3:
(*fun[3])(a,b);
break;
case 4:
(*fun[4])(a,b);
break;
}
}
