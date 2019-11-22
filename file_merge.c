#include<stdio.h>
#include<stdlib.h>
void main()
{
	char source1[200];
	char source2[200];
	char dst[200];
	FILE *source1f;
	FILE *source2f;
	FILE *dstf;
	char ch;
	printf("Enter source path1\n");
	scanf("%s",source1);
	printf("Enter source path2\n");
	scanf("%s",source2);
	printf("Enter Destination path\n");
	scanf("%s",dst);
	source1f=fopen(source1,"r");
	source2f=fopen(source2,"r");
	dstf=fopen(dst,"w");
	
	if(source1f==NULL || source2f==NULL || dstf==NULL)
		printf("Error\n");
	while((ch=fgetc(source1f))!=EOF)
		fputc(ch,dstf);
	while((ch=fgetc(source2f))!=EOF)
		fputc(ch,dstf);
	printf("Two files merged successfully\n");
	fclose(source1f);
	fclose(source2f);
	fclose(dstf);
}
