#include<stdio.h>
void main()
{
int a[20],i,decimal,num;
printf("enter any decimal number\n");
scanf("%d",&num);
i=0;
while(num>0)
{
a[i]=num%2;
num/=2;
i++;
}
printf("binary numbers are:");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
printf("\n");
}
}
