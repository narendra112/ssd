//find given nibble is palindrome
#include<stdio.h>
int binary(int num)
{
	for( int i=3;i>=0;i--)
	{
		((num>>i)&0x01)?printf("1"):printf("0");
	}
}
int  main()
{
	int num,i,d,m,k;
	printf("Enter any number\n");
	scanf("%d",&num);
	binary(num);
	printf("\n");
	d=for(i=3;i>=0;i--)
	{
		if((num&(1<<3-i)))
		printf("1");
		else
		printf("0");
	}		
	
	printf("\n%d",d);
	printf("\n");

	binary(d);
	printf("\n");
	if(num==d)
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");
}
