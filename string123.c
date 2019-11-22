#include<string.h>
#include<stdio.h>
int main()
{
	char str1[30]="Narendra";
	char str2[20];
	for(int i=0;str1[i]!='\0';i++)
	str2[i]=str1[i];
	if(str1==str2)
		printf("Same\n");
	else
		printf("Different\n");
}
