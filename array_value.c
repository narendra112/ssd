#include<stdio.h>
void main()
{
int a[5],num,i,k;
printf("before changing index\n");;
for (i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
a[0]=a[0]+15;
printf("after changing index value\n");
for (i=0;i<5;i++)
{
printf("%d\n",a[0]);
}
}

