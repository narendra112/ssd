//Program to copy one file to another
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *sourcef;
	FILE *dstf;
	char sourcep[100];
	char dstp[100];
	char ch;
	printf("Enter source path\n");
	scanf("%s",sourcep);
	printf("Enter destination path\n");
	scanf("%s",dstp);
	sourcef=fopen(sourcep,"r");
	dstf=fopen(dstp,"w");
	if(sourcef==NULL || dstf==NULL)
		printf("Error\n");
	ch=fgetc(sourcef);
	while(ch!=EOF)
	{
		fputc(ch,dstf);
		ch=fgetc(sourcef);
	}
	printf("Files copied\n");
	fclose(sourcef);
	fclose(dstf);
}
