#include<stdio.h>
void main()
{
 int i;
for(i=1;i<=5;i++)
{
if(i==2||i==4)
printf("***");
else if(i==3)
printf("*");
else if(i==1)
printf("*****");
else if(i==5)
printf("******");
else
printf(" ");
printf("\n");
}
}
