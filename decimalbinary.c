#include<stdio.h>
void main()
{
int i=0,a[10],num,j;
printf("Enter any number\n");
scanf("%d",&num);
while(num>0)
{
a[i]=num%2;
num/=2;
i++;
}
for(j=i-1;j>=0;j--)
{
printf("%d",a[j]);
}
printf("\n");
}
