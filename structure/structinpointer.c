#include<stdio.h>
#include<string.h>
struct dd
{
	int id,book_size;
	char book_name[20];
}b,*b1;
void main()
{
	b1=&b;
	printf("Enter book id\n");
	scanf("%d",&b.id);
	printf("Enter book_name\n");
	scanf("%s",b.book_name);
	printf("Enter book_size\n");
	scanf("%d",&b.book_size);
	printf("Book size=%d\nBook name=%s\nBook id=%d\n",b1->id,b1->book_name,b1->book_size);
}
