//setting group of bit using array
#include<stdio.h>
void binary(int num)
{
	int i;
	for(i=7;i>=0;i--)
		((num>>i)&0x01)?printf("1"):printf("0");
		
}
void main()
{
	int pos[3]={1,2,3},num,i;
	printf("Enter any number\n");
	scanf("%d",&num);
	for(i=0;i<3;i++)
		num=(num|(0x01<<pos[i]));
	binary(num);
	printf("\n");
	printf("modified num is %d",num);
}
