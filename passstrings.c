#include<stdio.h>
int fun(char str[5][10],char str2[5][10]);
void main()
{
	int i;
	char str[5][10]={"ravi","teja","reddy","ram","anil"},str2[5][10]={"nare","vim","edit","sravan","siva"};
	fun(str,str2);
	for(i=0;i<=5;i++)
	{
		printf("main=%s",str[i]);
		}
}
int fun(char str[5][10],char str2[5][10])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("str=%s\n,str2=%s\t",str[i],str2[i]);
		return str;
	}
}
