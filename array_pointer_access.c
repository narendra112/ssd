#include<stdio.h>
void main()
{
int a[5],i;
printf("Enter elements\n");
for(i=0;i<5;i++)
scanf("%d",a+i);
printf("Entered elements are\n");
for(i=0;i<5;i++)
printf("%d\t",*(a+i));
}
