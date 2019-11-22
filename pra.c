#include<stdio.h>
void main()
{
int i;
for(i=1;i<5;i++)
{
printf("%d",i);
}
i=2;
while(i<5)
{
printf("%d",i++);
}
i=6;
while(i--)
{
printf("%d",i);
}
}
