//reverse words in string
#include<stdio.h>
void main()
{
	char a[30];
	int i,j,count=0,k;
	printf("Enter any string\n");
	gets(a);
	for(i=0;a[i];i++)
	{
		count++;
		j=count-1;
	}
	for(i=count-1;i>=0;i--)
	{
		if(a[i]==' ' ||i==0)
		{
			k=i;
			while(i<j)
			{
				if(i==0)
					printf("%c",a[i]);
					i++;
					printf("%c",a[i]);
			}
			printf(" ");
			j=k;
		}
	}
}
