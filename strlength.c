#include<stdio.h>
void main()
{
char str[]="Narendra";
int count=0;
char *p=str;
while(*p!='\0')
{
count++;
p++;
}
printf("%d\n",count);
}
