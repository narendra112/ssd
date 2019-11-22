//swapping#include<stdio.h>
/*int main() {
    int a, b = 0xaaaaaaaa, c = 0x55555555;
        printf("\n enter the number: \n");
	    scanf("%d", & a);
	        a = ((a & b) >> 1) | ((a & c) << 1);
		    printf("\n %d", a);
		    }include<stdio.h>*/
void binary(int num)
{
	for(int i=7;i>=0;i--)
	{
		((num>>i)&0x01)?printf("1"):printf("0");
		if(i%4==0)
			printf(" ");
	}
}
int  main(void)
{
	unsigned int num,d;
	printf("Enter any number\n");
	scanf("%d",&num);
	binary(num);
	printf("\n");
	d=(((num&0xaa)>>1)|((num&0x55)<<1));
	binary(d);
}
