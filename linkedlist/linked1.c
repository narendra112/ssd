#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
void append();
void create();
void display();
void length();
void addatbeg();
int main()
{
	int ch;
	while(1)
	{
		printf("1.Append\n");
		printf("2.Create\n");
		printf("3.display\n");
		printf("4.length\n");
		printf("5.Addatbeg\n");
		printf("6.Reverse\n");
		printf("7.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:append();
			       break;
			case 2:create();
			       break;
			case 3:display();
			       break;
			case 4:length();
			       break;
			case 5:addatbeg();
			       break;
			case 7:exit(1);
			default:printf("Wrong choice\n");
		}
	}
}
void append()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter data\n");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL)
{
root=temp;
}
else
{
struct node *p;
p=root;
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
}
}
