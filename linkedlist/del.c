#include<stdio.h>
#include<stdlib.h>
struct node

{

	int info;

	struct node *link;

};

struct node *del(struct node *start,int data)

{

	struct node *tmp,*p;

	if(start==NULL)

	{

		printf("List is empty\n");

		return start;

	}

	if(start->info==data)  /*Deletion of first node*/

	{

		tmp=start;

		start=start->link;  

		free(tmp);

		return start;

	}

	p=start;   /*Deletion in between or at the end*/

	while(p->link!=NULL)

	{

		if(p->link->info==data)   

		{

			tmp=p->link;

			p->link=tmp->link;

			free(tmp);

			return start;

		}

		p=p->link;

	}

	printf("Element %d not found\n",data);

	return start;

}/*End of del()*/


