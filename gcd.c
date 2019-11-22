#include<stdio.h>
void main()
/*{
	int i,j,gcd=0,k;
	printf("enter 2 no\n");
	scanf("%d%d",&i,&j);
	for(k=1;k<=i && k<=j; k++)
	{
		if(i%k==0&&j%k==0)
		{
			gcd=k;
		}
	}
	printf("GCD=%d\n",gcd);
}*/

{
	int n1,n2,gcd,neu,den,rem;
	printf("Enter 2 numbers :\n");
	scanf("%d%d",&n1,&n2);
	while(n1 != n2)
	{
		if(n1 >n2)
			n1 = n1-n2;
		else
			n2 = n2-n1;
	}
	printf("GCD = %d\n",n1);
}

