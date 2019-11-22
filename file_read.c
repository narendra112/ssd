//reading from file
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char a[1000];
	FILE *p;
	if((p=fopen("/home/narendra/Desktop/Cprograms/3d.c","r"))==NULL)
	{
		printf("Error\n");
	}
	fscanf(p,"%[^\n]",a);
	printf("Data from file=\n%s\n",a);
	fclose(p);
}

