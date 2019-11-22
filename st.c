include <stdio.h>
void binary(int num)
{
for(int i=7;i>=0;i--)
((num>>i)&1)?printf("1"):printf("0");
}
void main()
{
	int i,num;
	printf("Enter any number\n");
	scanf("%d",&num);
	for(i=7;i>=0;i--)
	{
	if(num&(0x01<<7-i))
	printf("1");
	else
	printf("0");
	}
//	printf("After revising=%d",binary());
}
