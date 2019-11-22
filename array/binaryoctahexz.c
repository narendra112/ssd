//convert binary,octal,hexa
#include<stdio.h>
void func (int,int);
void main()
{
	int num,a;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("1.Binary\n2.Octal\n3.Hexadecimal\n");
	printf("Enter your choice\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("Binary equivalent is\n");
		func(num,2);
		break;
	case 2:
		printf("Octal equivalent is\n");
		func(num,8);
		break;
	case 3:
		printf("Hexadecimal equivalent is\n");
		func(num,16);
		break;
	}
}
void func (int num,int con)
{
	int i=0,j,rem;
	char a[20];
	while(num>0)
	{
	rem=num%con;
	num/=con;
	if(rem>9 && rem<16)
		a[i++]=rem-10+'A';
	else
		a[i++]=rem+'0';
	}
	for(j=i-1;j>=0;j--)
		printf("%c\t",a[j]);
}
