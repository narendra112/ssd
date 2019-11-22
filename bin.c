/*#include<stdio.h>
int bin(int d);
void main()
{
	int n;
	printf("Enter any number to find binary\n");
	scanf("%d",&n);
	printf("Decimal=%d Binary=%d",n,bin(n));
}
int bin(int d)
{
	int a=1,bin=0,rem;
	while(d>0)
	{
	rem=d%2;
	bin=bin+rem*a;
	d/=2;
	a*=10;
	}
	return bin;
}
*/
#include<stdio.h>
void main()
{
int i,n,a[20];
printf("Enter any number in decimal\n");
scanf("%d",&n);
while(n>0)
{
a[i]=n%10;
n/=10;
i++;
}
printf("binary numbers are\n");
for(i=4;i>=0;i--)
{
printf("%d",a[i]);
}
}
