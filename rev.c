#include<stdio.h>
#include<string.h>
void main()
{
char a[10]="nare",b[10],i,j;
//int i,j;
j=0;
for(i=strlen(a)-1;a[i]>=0;i--)
{
b[j]=a[i];
j++;
}
b[j]='\0';
printf("%s",b);
}
