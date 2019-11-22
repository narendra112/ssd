#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
{
delay(213456);
//system("sleep 2"); 
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
delay(23456);
			printf("*");
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}delay(13234);
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		delay(12345);
		printf("\n");
	}
}
