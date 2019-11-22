#include<stdio.h>
void main()
{
int num,a,i=0,rem,temp;
printf("Enter any number : ");
scanf("%d",&num);
a=rem=num%10;
temp=num;
while(temp>0)
{
temp = temp/10;
}
printf("last number is %d\nfirst number is %d\n",a,temp);
}

