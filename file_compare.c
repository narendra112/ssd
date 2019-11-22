#include<stdio.h>
#include<stdlib.h>
void main()
{
	char path1[100];
	char path2[100];
	FILE *p1;
	FILE *p2;
	printf("Enter path1\n");
	scanf("%s",path1);
	printf("Enter path2\n");
	scanf("%s",path2);
		p1=fopen(path1,"r");
		p2=fopen(path2,"r");
	fclose(p1);
	fclose(p2);
	
	if(p1==p2)
		printf("Both files are equal\n");
	else 
		printf("Both files are different\n");
}
