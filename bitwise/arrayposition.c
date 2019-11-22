#include<stdio.h>
void main()
{
	int i,a[10],num,s;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Enter position of array\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	num=(num|(0x01<<a[i]));
	printf("After setting bit=%d\n",num);

}
