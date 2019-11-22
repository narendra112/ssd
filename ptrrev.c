#include<stdio.h>
void main()
{
char a[10]="narendra",*ptr;
*ptr=&a;
while(ptr!='\0')
{
ptr++;
}
while(ptr!='\0')
{
printf("%c",*ptr);
}
}
