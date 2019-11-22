#include<stdio.h>
void main()
{
char a[20],b[20],i;
printf("Enter a string\n");
scanf("%s",a);
printf("Enter b string\n");
scanf("%s",b);
printf("Before copy=%s\n",b);
for(i=0;a[i]!='\0';i++)
{
b[i]=a[i];
}
b[i]='\0';
printf("After copy=%s\n",b);
}
