#include<stdio.h>
void main()
{
int i,count=0;
char c[100];
printf("Enter any string\n");
gets(c);
for(i=0;c[i]!='\0';i++)
{
count++;
}
printf("Length of string=%d\n",count);
}
