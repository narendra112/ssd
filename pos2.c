#include<stdio.h>
void main()
{
	int num,pos2,i=7;
	printf("Enter any number:\n");
	scanf("%d",&num);
	pos2=(num>>2)&0x01;
	printf("%d\n",pos2);
	while(i>=0)
	{
		if((num>>i)&0x01)
		{
			if(i==2)
			{
				printf("%d",pos2);
			}
			else
			{
				printf("0");
			}
		}
		else
		{
			 if(i==2)
                          {
                                  printf("%d",pos2);
                          }
                          else
                          {
                                  printf("1");
                          }


//		num=num&(~(0x1<<i));
		}
		i--;
		}
		}
