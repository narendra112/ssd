#include<stdio.h>
#include"ravi.h"
#include<stdlib.h>
void main()
{
	while(1)
	{
	int choice;
	printf("1:add function\n");
	printf("2:sub function\n");
	printf("3:exit program\n");
	printf("enter choice\n");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:
				add_1();
				break;
			case 2:
				sub_1();
				break;
			case 3: 
				exit(1);
			default:
				printf("wrong choice\n");

		}
	}
}
