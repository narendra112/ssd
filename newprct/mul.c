#include<stdio.h>
void main()
{
int a,b,s=0,i;
printf("enter 2 numbers\n");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
s=s+a;
printf("%d\n",s);
}
