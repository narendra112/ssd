#include<stdio.h>
void reverse (int n);//function declaration
void sumofnumber(int n);
int sum_firstlast(int n);
int firstlast(int n);
void leap(int year);
void product(int n);
void even(int f);
void no_of_digit(int n);
int palin(int n);
void quadratic(int a,int b,int c);
void main()
{
int n,sum,f,year;
printf("enter n value\n");
scanf("%d",&n);
printf("enter any number to check even\n");
scanf("%d",&f);
printf("enter any year\n");
scanf("%d",&year);
no_of_digit(n);//function call
sumofnumber(n);
even(f);
sum_firstlast(n);
product(n);
firstlast(n);
reverse(n);
leap(year);
if(palin(n))
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
void no_of_digit(int n)//function definition
{
int rem,i=0;
while(n>0)
{
rem=n%10;
i++;
n/=10;
}
printf("countofdigit=%d\n",i);
}
void sumofnumber(int n)
{
int sum=0,rem;
while(n>0)
{
rem=n%10;
sum+=rem;
n=n/10;
}
printf("sumofdigit=%d\n",sum);
}
void product(int n)
{
int rem,product=1;
while(n>0)
{
rem=n%10;
product*=rem;
n/=10;
}
printf("productofdigit=%d\n",product);
}
int firstlast(int n)
{
int last;
last=n%10;
while(n>10)
{
n=n/10;
}
printf("first=%d last=%d\n",n,last);
}
int sum_firstlast(int n)
{
int last,sum;
last=n%10;
while(n>10)
{
n=n/10;
}
sum=last+n;
printf("sum_firstlast=%d\n",sum);
}

void reverse(int n)
{
int rem,reverse=0;
while(n>0)
{
rem=n%10;
reverse=reverse*10+rem;
n/=10;
}
printf("reverse=%d\n",reverse);
}
void even (int f)
{
if(f%2==0)
printf("even\n");
else
printf("odd\n");
}
void leap(int year)
{
(year%400==0)||(year%4==0)?printf("leap year\n"):(year%100==0)?printf("not leap year\n"):printf("not leap year\n");
}
int palin(int num)
{
if(num==rev(num))
return 1;
return 0;
}
int rev(int n)
{
int rem,reverse=0;
while(n>0)
{
rem=n%10;
reverse=reverse*10+rem;
n/=10;
return reverse;
}
}
int quadratic(int a,int b ,int c)
{
int d;
d=(b*b)-(4*a*c);
printf("roots are equal\n");
root1=root2=-b/(2*a);
printf("root are %d & %d",root1,root2);
printf("roots are complex"


