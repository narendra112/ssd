#include<stdio.h>
int odd(void);
void main()
{
printf("square of all odd numbers=%d\n",odd());
}
int odd(void)
{
int s=0;
for(int i=1;i<=25;i++)
{
if(i%2!=0)
s=s+i*i;
}
return s;
}
