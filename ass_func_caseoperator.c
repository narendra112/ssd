#include<stdio.h>
int big(int,int,int);
int cube(int);
int lcmgcd(int,int);
int prime(int);
int oddeven(int);
int fibnocassi(int);
int factorial(int);
void multiply(int mat1[12][12],int mat2[12][12],int ,int ,int );
void main()
{
	int operation,a,b,c,fu,s,i,j,d=0,mat1[12][12],mat2[12][12],k,m,n,p;

	char ch;

	do

	{

		printf("1.biggest of 3 numbers\n");
		printf("2.Find volume of cube\n");
		printf("3.Find LCM & GCD\n");
		printf("4.Find Prime numbers or not\n");
		printf("5.check even or odd\n");
		printf("6.print Fibnocassi to find nth element\n");
		printf("7.Find Factorial of given number\n");
		printf("8.To print 2D array multiplication\n");
		printf("Enter which operation to perform\n");
		scanf("%d",&operation);
		switch(operation)
		{
			case 1:
				big(a,b,c);
				break;
			case 2:
				cube(a);
				break;
			case 3:
				lcmgcd(a,b);
				break;
			case 4:
				prime(a);
				break;
			case 5:
				oddeven(a);
				break;
			case 6:
				printf("Enter any number to find fibnocassi series\n");
				scanf("%d",&a);
				s=fibnocassi(a);
				printf("Fibonacci series=%d\t",s);
				break;
			case 7:
				printf("Enter any number to find factorial\n");
				scanf("%d",&a);
				fu=factorial(a);
				printf("Factorial=%d\n",fu);
				break;
			case 8:
				printf("Enter the number of rows and columns for 1st matrix\n");
				scanf("%d%d",&m,&n);
				printf("Enter the elements of the 1st matrix\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&mat1[i][j]);
					}
				}
				//no of col of 1st mat = no of rows of 2nd mat
				printf("Enter the number of columns for 2nd matrix\n"); 
				scanf("%d",&p);
				printf("Enter the elements of the 2nd matrix\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<p;j++)
					{
						scanf("%d",&mat2[i][j]);
					}
				}

				printf("The 1st matrix\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d\t",mat1[i][j]);
					}
					printf("\n");
				}
				printf("The 2nd matrix\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<p;j++)
					{
						printf("%d\t",mat2[i][j]);
					}
					printf("\n");
				}
				multiply(mat1,mat2,m,n,p);
		}

		printf("you want continue press Y or press N\n");

		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');

}
int big(int a,int b,int c)
{
	printf("Enter 3 numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)?printf("Biggest of 3 numbers=%d\n",a):(b>c)?printf("Biggest of 3 numbers=%d\n",b):printf("Biggest of 3 numbers=%d\n",c);
}

int cube(int a)
{
	int volume;
	printf("Enter value to find volume of cube\n");
	scanf("%d",&a);
	volume=a*a*a;
	printf("Volume of cube=%d\n",volume);
}

int lcmgcd(int numo,int deno)
{
	int nume,den,d;
	printf("Enter two numbers\n");
	scanf("%d%d",&numo,&deno);
	if (numo > deno)
	{
		nume=numo;
		den=deno;
	}
	else if (numo < deno)
	{
		nume=numo;
		den=deno;
	}
	d=nume%den;
	while (d != 0)
	{
		nume=den;
		den=d;
		d=nume%den;
	}

	printf("the gcd of that given two numbers is %d\n",den);
	printf("the lcm of that given two numbers is %f\n",(float) (numo*deno)/den);
}

int prime(int a)
{
	printf("Enter number to check prime number\n");
	scanf("%d",&a);
	int i,flag=0;;
	for(i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is prime number\n",a);
	}
	else
	{
		printf("%d is not a prime number",a);
	}
}

int oddeven(int a)
{
	printf("Enter any number\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Given number is even\n");
	}
	else
	{
		printf("Given number is odd\n");
	}
}

int fibnocassi(int a)
{
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
		return fibnocassi(a-1)+fibnocassi(a-2);
}

int factorial(int a)
{
	int s;
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	return a*factorial(a-1);
}

void multiply(int mat1[12][12],int mat2[12][12],int m,int n,int p)
{
	int mul[12][12],i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			mul[i][j]=0;
			for(k=0;k<n;k++)
			{
				mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
			}
		}
	}

	printf("The resultant matrix formed on multiplying the two matrices\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
