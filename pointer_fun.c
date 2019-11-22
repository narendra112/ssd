#include<stdio.h>
void func(char *ch);
void main()
{
char *st=("Narendra\n");
func(st);
}
void func(char *ch)
{
printf("\n%s\n",ch);
}
