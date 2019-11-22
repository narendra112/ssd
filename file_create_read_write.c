#include<stdio.h>
#include<stdlib.h>
void main()
{
	char a[1000];
	FILE *p;
	p=fopen("/home/narendra/Desktop/narendra.txt","w");
	if (p==NULL)
		printf("Error\n");
	printf("Enter data to store in file\n");
	fgets(a,1000,stdin);
	fputs(a,p);
	fclose(p);
	printf("File created and data is saved\n");
}

