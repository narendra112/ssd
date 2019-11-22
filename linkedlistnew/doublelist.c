#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};

struct node *start=NULL;
int create();
int display();
void main()
{
	create();
	display();
}
int create()
{
	int i,n;
	printf("Enter number of nodes\n");
	scanf("%d",&n);
	if(n==0)
	{
		return 0;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			struct node *temp;
			temp=(struct node *)malloc(sizeof(struct node));
			printf("Enter data\n");
			scanf("%d",&temp->data);
			temp->right=NULL;
			temp->left=NULL;
			if(start==NULL)
			{
				start=temp;
			}
			else
			{
				struct node *next;
				next=start;
				while(next->right!=NULL)
				{
					next=next->right;
				}
				next->right=temp;
				temp->left=next;;
			}
		}
		return 0;
	}
}
int display()
{
	struct node *p;
	p=start;
	if(start==NULL)
	{
		printf("List is empty\n");
	}
	printf("List is:");
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->right;
	}
	printf("\n");
	return 0;
}
