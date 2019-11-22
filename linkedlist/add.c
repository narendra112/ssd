#include<stdio.h>
#include<stdlib.h>
struct node

{

	int info;

	struct node *link;

};

struct node *addatbeg(struct node *start,int data)

{

	struct node *tmp;

	tmp=(struct node *)malloc(sizeof(struct node));

	tmp->info=data;

	tmp->link=start;

	start=tmp;

	return start;

}/*End of addatbeg()*/

struct node *addatend(struct node *start,int data)

{

	struct node *p,*tmp;

	tmp=(struct node *)malloc(sizeof(struct node));

	tmp->info=data;

	p=start;

	while(p->link!=NULL)

		p=p->link;

	p->link=tmp;

	tmp->link=NULL;

	return start;

}/*End of addatend()*/

struct node *addafter(struct node *start,int data,int item)

{

	struct node *tmp,*p;

	p=start;

	while(p!=NULL)

	{

		if(p->info == item)

		{

			tmp=(struct node *)malloc(sizeof(struct node));

			tmp->info=data;

			tmp->link=p->link;

			p->link=tmp;

			return start;

		}

		p=p->link;

	}

	printf("%d not present in the list\n",item);

	return start;

}/*End of addafter()*/

struct node *addbefore(struct node *start,int data,int item)

{

	struct node *tmp,*p;

	if(start == NULL )

	{

		printf("List is empty\n");

		return start;

	}	

	/*If data to be inserted before first node*/

	if(item==start->info)

	{

		tmp=(struct node *)malloc(sizeof(struct node));

		tmp->info=data;

		tmp->link=start;

		start=tmp;

		return start;

	}	

	p = start;

	while(p->link!=NULL) 

	{

		if(p->link->info==item)

		{

			tmp=(struct node *)malloc(sizeof(struct node));

			tmp->info=data;

			tmp->link=p->link;

			p->link=tmp;

			return start;

		}

		p=p->link;

	}

	printf("%d not present in the list\n",item);

	return start;

}/*End of addbefore()*/	



struct node *addatpos(struct node *start,int data,int pos)

{

	struct node *tmp,*p;

	int i;	

	p=start;

	for(i=1; i<pos-1 && p!=NULL; i++)

		p=p->link;

	if(p==NULL)

		printf("There are less than %d elements\n",pos);

	else

	{

		tmp=(struct node *)malloc(sizeof(struct node));   

		tmp->info=data;

		if(pos==1)

		{

			tmp->link=start; 

			start=tmp;

		}

		else

		{

			tmp->link=p->link;

			p->link=tmp;

		}

	} 

	return start;

}/*End of addatpos()*/


