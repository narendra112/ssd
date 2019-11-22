#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL;
void createlist();
void addatbeg();
int length();
void display();
void addatend();
int addatpos();
int delete();
int reverse();
int search();
void sort();
void deleteall();
//void swap();
void swap(struct  node *a,struct node *b);
void main()
{
	int ch;
	while(1)
	{
		printf("1.create list\n");
		printf("2.Addatbeg\n");
		printf("3.Length of string\n");
		printf("4.Display\n");
		printf("5.Addatpos\n");
		printf("6.Delete\n");
		printf("7.Reverse\n");
		printf("8.Addatend\n");
		printf("9.Search\n");
		printf("10.Sorting\n");
		printf("11.swap\n");
		printf("12.deleteall\n");
		printf("13.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:createlist();
			       break;
			case 2:addatbeg();
			       break;
			case 3:length();
			       break;
			case 4:display();
			       break;
			case 5:addatpos();
			       break;
			case 6:delete();
			       break;
			case 7:reverse();
			       display();
			       break;
			case 8:addatend();
			       break;
			case 9:search();
			       break;
			case 10:sort();
				break;
				/*	case 11:
					int p1,p2;
					printf("Enter two position to swap\n");
					scanf("%d%d",&p1,&p2);
					swap(&p1,&p2);

					break;*/
			case 12:deleteall();
				break;
			case 13:exit(1);
				break;
			default:printf("Please enter correct choice\n");
		}
	}
}
void createlist()
{
	struct node *temp;
	int n,i;
	printf("Enter number of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter Data\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(start==NULL)
		{
			start=temp;
		}
		else
		{
			struct node *p;
			p=start;
			while(p->link!=NULL)
			{
				p=p->link;
			}
			p->link=temp;
		}
	}
}
void display()
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->link;
	}
	printf("\n");
}
void addatbeg()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&temp->data);
	temp->link=start;
	start=temp;
}
int length()
{
	struct node *p;
	p=start;
	int count=0;
	while(p!=NULL)
	{
		count++;
		p=p->link;
		//		count++;
	}
	count=count;
	printf("Length of node:%d\n",count);
}
void addatend()
{
	struct node *temp,*prev;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	prev=start;
	while(prev->link!=NULL)
	{
		prev=prev->link;
	}
	prev->link=temp;
}
int addatpos()
{
	struct node *p,*temp;
	int i,pos;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&temp->data);
	printf("Enter position to be added\n");
	scanf("%d",&pos);
	p=start;
	if(p==NULL)
	{
		printf("there are less than %d element\n",pos);
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			p=p->link;
		}
		if(pos==1)
		{
			temp->link=start;
			start=temp;
		}
		else
		{
			temp->link=p->link;
			p->link=temp;
		}
	}
	return 0;
}
/*int delete()
{
	struct node *p,*q;
	int pos,i;
	printf("Enter which node to delete\n");
	scanf("%d",&pos);
	p=start;
	q=NULL;
	for(i=1;i<=pos-1;i++)
	{
		p=p->link;
	}
	q=p->link;
	p->link=q->link;
	free(q);
}*/
    int delete()
    {
    struct node *temp,*p,*q;
    int i,pos,count=0;
    temp=start;
    while(temp!=NULL)
    {
    count++;
    temp=temp->link;
    }
    printf("Enter which node to delete\n");
    scanf("%d",&pos);
    if (pos>count)
    printf("Invalid location\n");
    else if(pos==1)
    {
    temp=start;
    start=temp->link;
    temp->link=NULL;
    free(temp);
    }
    else
    {
    p=start;
    for(i=1;i<pos-1;i++)
    {
    p=p->link;
    }
    q=p->link;
    p->link=q->link;
//q->link=NULL;
free(q);
}
}
int reverse()
{
	struct node *prev,*next,*ptr;
	prev=NULL;
	ptr=start;
	if(ptr==NULL)
	{
		printf("Nodes are empty\n");
		return 0;
	}
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	start=prev;
	printf("Nodes are reversed\n");
	return 0;
}
int search()
{
	int search;
	struct node *temp;
	printf("Enter node to search\n");
	scanf("%d",&search);
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data==search)
		{
			printf("Node found\n");
			return 0;
		}
		temp=temp->link;
	}
	printf("Node not found\n");
}
void sort() {

	int i, j, k, tempData;
	struct node *current;
	struct node *next;

	int size = length();
	k = size ;

	for ( i = 0 ; i < size - 1 ; i++, k-- ) {
		current = start;
		next = start->link;

		for ( j = 1 ; j < k ; j++ ) {   

			if ( current->data > next->data ) {
				tempData = current->data;
				current->data = next->data;
				next->data = tempData;
			}

			current = current->link;
			next = next->link;
		}
	}   
}/*
    void swap(struct node *p1,struct node *p2)
    {
//	struct node *p1,*p2;
//	printf("Enter data to swap\n");
//	scanf("%d%d",&p1->data,&p2->data);
int temp;
temp=p1->data;
p1->data=p2->data;
p2->data=temp;
}*/
void deleteall()
{
int i,j;
          for(i=1;i<=4;i++)
          {
                  
                          delete();
			  display();
                  
                  printf("\n");
          }

}
