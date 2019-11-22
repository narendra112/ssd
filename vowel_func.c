#include<stdio.h>
void vowel(char ch);
void week(int n);
void main()
{
char ch;
int n;
printf("enter any value\n");
scanf("%c",&ch);
printf("enter any number\n");
scanf("%d",&n);
vowel(ch);
week(n);
}
void vowel(char ch)
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("vowel\n");
else
printf("not a vowel\n");
}
void week(int n)
{
if(n==1)
printf("Monday\n");
else if(n==2)
printf("Tuesday\n");
else if(n==3)
printf("Wednesday\n");
else if(n==4)
printf("Thursday\n");
else if(n==5)
printf("Friday\n");
else if(n==6)
printf("Saturday\n");
else if(n==7)
printf("Sunday\n");
else
printf("enter valid input\n");
}

