//open file and close a file 
#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *f1;
	char c;
	printf("Enter a DATA input:\n");
	f1 = fopen ("/home/narendra/Desktop/Cprograms/3d_add.c", "r");

	while ((c=getc(f1)) != EOF)
		putc(c,f1);

	fclose (f1);

	printf("\n DATA out put \n");

	//f1 = fopen ("/home/narendra/Desktop/Cprograms/3d_add.c","r");

	//while ((c= getc(f1))!= EOF)
			printf("%c", c);

	fclose (f1);
}
