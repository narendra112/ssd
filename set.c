#include<stdio.h>
int main()
{
int n,set,pos;
printf("Enter number\n");
scanf("%d",&n);
printf("Enter position\n");
scanf("%d",&pos);
set = n|(1<<pos);
printf("%d\n",set);
}
