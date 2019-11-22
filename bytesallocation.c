#include<stdio.h>
#include"bytesallocation.h"
#include<stdlib.h>
//void memory(int a);
void main()
{
	int choice,data,i,rem;
	while(1)
	{
	printf("1.Align 1 Bytes\n");
	printf("2.Align 2 Bytes\n");
	printf("3.Align 4 Bytes\n");
	printf("4.Align 8 Bytes\n");
	printf("5.Align 16 Bytes\n");
	printf("6.Align 32 Bytes\n");
	printf("7.Align 64 Bytes\n");
	printf("8.Align 256 Bytes\n");
	printf("9.Align 1k Bytes\n");
	printf("10.Align 2k Bytes\n");
	printf("11.Align 4k Bytes\n");
	printf("12.Align 1M Bytes\n");
	printf("13.Align 2M Bytes\n");
	printf("14.Align 4M Bytes\n");
	printf("15.exit\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :
			/*printf("Enter data from where to start\n");
			  scanf("%d",&data);
			  if(data%2==0)
			  {
			  for(i=1;i<=10;i++)
			  {
			  printf("%d-%x\n*/
			memory(1);
			break;
		case 2 :
			/*	printf("Enter data from where to start\n");
				scanf("%x",&data);
				if(data%4==0)
				{
				for(i=1;i<=10;i++)
				{
				printf("%d--%x\n",data,data);
				data+=4;
				}
				}
				else
				{
				rem=data%4;
				data=4-rem+data;
				for(i=1;i<=10;i++)
				{
				printf("%d--%x\n",data,data);
				data+=4;
				}
				}*/
			memory(2);
			break;
		case 3:
			memory(4);
			break;
		case 4:
			memory(8);
			break;
		case 5:
			memory(16);
			break;
		case 6:
			memory(32);
			break;
		case 7:
			memory(64);
			break;
		case 8:
			memory(256);
			break;
		case 9:
			memory(1024);
			break;
		case 10:
			memory(2048);
			break;
		case 11:
			memory(4096);
			break;
		case 12:
			memory(1048576);
			break;
		case 13:
			memory(2097152);
			break;
			case 14 :
			memory(4194304);
			break;

		case 15 :
			exit(1);
		default:
			printf("Please enter correct choice\n");
	}
	}
	}
/*	void memory (int a)
	{
		int rem,i,data;
		printf("Enter data where to  align\n");
		scanf("%d",&data);
		if(data%a==0)
		{
			for(i=1;i<=10;i++)
			{
				printf("%d--%x\n",data,data);
				data+=a;
			}
		}
		else
		{
			rem=data%a;
			data=a-rem+data;
			for(i=1;i<=10;i++)
			{
				printf("%d--%x\n",data,data);
				data+=a;
			}
		}
	}*/
