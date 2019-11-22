#include<stdio.h>
void main()
{	
	int key,a[10],flag=0,i;
	printf("enter any 10 value\n");
	for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter any key\n");
scanf("%d",&key);
for(i=0;i<10;i++)
{
	if(a[i]==key)
	{
		flag=1;
		
	}
}
if(flag==1)
{
printf("key is there\n");
printf("the given key is located at address %p\n",&a[i]);
}

else
{
printf("key not  there\n");
}
}

