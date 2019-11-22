//program to count no of character,lines,words
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char file[1000];
	FILE *filef;
	char ch;
	int character=0,words=0,lines=0;
	printf("Enter file path\n");
	scanf("%s",file);
	filef=fopen(file,"r");
	if(filef==NULL)
		printf("Error\n");
	while(ch=fgetc(filef)!=EOF)
	{
		character++;
		if(ch=='\0' || ch=='\t' || ch=='\n' || ch==' ')
			words++;
		if(ch=='\n' || ch=='\0')
			lines++;
	}
	printf("Character=%d\t",character);
	printf("Lines=%d\t",lines);
	printf("Words=%d\n",words);
	fclose(filef);
}

