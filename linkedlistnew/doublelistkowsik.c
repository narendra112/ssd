#include<stdio.h>

#include<stdlib.h>

struct node
{
	int data;

	struct node *left;

	struct node *right;
};


struct node *start = NULL;


struct node *creating_list(struct node *);
struct node *add_at_beginning(struct node *);
struct node *add_at_end(struct node *);
struct node *add_at_given_position(struct node *);
struct node *delete_at_beginning(struct node *);
struct node * delete_at_end(struct node *);
struct node *delete_at_given_position(struct node *);
int length(struct node *);
void searching_element(struct node *);
void display(struct node *);



int main()
{
	char ch,c;

	int len;

	do
	{
		printf("1.Create a list.....\n2.Add at beginning.....\n3.Add at end......\n");
		printf("4.Add at given position.....\n5.Delete at beginning.....\n6.Delete at given position....\n7.Delete at End.....\n");
		printf("8.Length of node....\n9.Searching_element......\n10.Display......\n");
		printf("Enter your choice\n");
		scanf("%hhd",&ch);

		switch(ch)
		{
			case 1:

				start = creating_list(start);

				break;

			case 2:

				start = add_at_beginning(start);

				break;

			case 3:

				start = add_at_end(start);

				break;

			case 4:

				start = add_at_given_position(start);

				break;

			case 5:

				start = delete_at_beginning(start);

				break;

			case 6:

				start = delete_at_given_position(start);

				break;

			case 7:

				start = delete_at_end(start);

				break;

			case 8:

				len = length(start);

				printf("The length of list is ..... %d\n",len);

				break;

			case 9:

				searching_element(start);

				break;

			case 10:

				display(start);

				break;

			default:

				printf("The choice is wrong\n");
		}


		printf("Do u want to continue....yes or no....\n");

		scanf(" %c",&c);

	}while( c == 'y' || c == 'Y' );


	printf("Program exit.....\n");

}





//**************************************** CREATINGLIST **************************************//




struct node *creating_list(struct node *start)
{

	int size,i;

	printf("Enter the size of node\n");

	scanf("%d",&size);

	if( size == 0 )
	{
		return start;
	}
	else
	{

		for( i = 0 ; i < size ; i++ )
		{
			struct node *temp;

			temp = (struct node *)malloc(sizeof(struct node));

			printf("Enter the data....\n");

			scanf("%d",&temp->data);

			temp->right = NULL;

			temp->left = NULL;

			if( start == NULL )
			{
				start = temp;
			}

			else
			{
				struct node *next;

				next = start;

				while( next->right != NULL )
				{
					next = next->right;
				}

				next->right = temp;
				temp->left  = next;
			}
		}

		return start;

	}
}




//********************************************** ADD AT BEGINNING *******************************************//



struct node *add_at_beginning(struct node *start )
{
	struct node *temp;

	temp = (struct node *)malloc(sizeof(struct node));

	printf("Enter the data...........\n");

	scanf("%d",&temp->data);

	temp->right = NULL;

	temp->left  = NULL;

	if( start == NULL )
	{
		start = temp;
	}
	else
	{
		temp->right = start;

		start->left  = temp;

		start = temp;
	}

	return start;
}





//******************************************** ADD AT END ****************************************//



struct node *add_at_end(struct node *start )
{
	struct node *temp;

	temp = (struct node *)malloc(sizeof(struct node));

	printf("Enter the data..............\n");

	scanf("%d",&temp->data);

	temp->right = NULL;

	temp->left  = NULL;

	if( start == NULL )
	{
		start = temp;
	}
	else
	{
		struct node *next;

		next = start;

		while( next->right != NULL )
		{
			next = next->right;
		}

		next->right = temp;

		temp->left = next;
	}


	return start;

}




//******************************************* ADD AT GIVEN POSITION *********************************//



struct node *add_at_given_position(struct node *start)
{
	int loc,len,i=1;

	printf("Enter the location to add...\n");

	scanf("%d",&loc);

	len = length(start);

	if( loc > len )
	{
		printf("Invalid location....\n");

		printf("List contains only %d nodes....\n",len);
	}

	else
	{
		struct node *temp ,*p = start;

		temp = (struct node *)malloc(sizeof(struct node));

		printf("Enter the data....\n");

		scanf("%d",&temp->data);

		temp->right = NULL;

		temp->left = NULL;

		while( i < loc-1 )
		{
			p = p->right;

			i++;
		}

		temp->right = p->right;

		p->right->left = temp;

		temp->left = p;

		p->right = temp;
	}

	return start;
}




//***************************************** DELETE AT BEGINNING ***************************************//




struct node *delete_at_beginning(struct node *start)
{

	int len;

	struct node *temp = start;

	if( start == NULL )
	{
		printf("List is Empty.....\n");

		return start;
	}

	else
	{	
		len = length(start);

		if( len != 1 )
		{
			start = temp->right;

			temp->right->left = temp->left;

			temp->right = NULL;

			free(temp);
		}
		else
		{
			start = temp->right;

			temp->right = NULL;

			free(temp);
		}

		return start;
	}
}



//*************************************** DELETE AT END *********************************************//



struct node *delete_at_end(struct node *start)
{
	struct node *temp;

	temp = start;

	int len,i = 1;

	len = length(start);

	while( i < len )
	{
		temp = temp->right;

		i++;
	}


	//	temp = temp->right;

		if( temp != NULL )
		{
			temp->left->right = NULL;

			temp->left = NULL;

			free(temp);
		}

		return start;
	

}


//************************************ DELETE AT GIVEN POSITION **************************************//



struct node *delete_at_given_position( struct node *start)
{

	int len , pos , i = 1;

	printf("Enter the postion to be delete.......\n");

	scanf("%d",&pos);

	len = length(start);

	struct node *temp ,*p;

	if( start == NULL )
	{
		printf("List is empty.....\n");

		return start;
	}

	if( pos > len )
	{
		printf("Invalid location.....\n");

		printf("List contains only %d nodes....\n",len);

	}
	else if( pos == 1 )
	{
		temp = delete_at_beginning(start);

		return temp;
	}
	else if( pos == len )
	{
		temp = delete_at_end(start);

		return temp;
	}
	else
	{
		temp = start;

		while( i < pos-1 )
		{
			temp = temp->right;

			i++;
		}

		p = temp->right;

		temp->right = p->right;

		p->right->left = temp;

		p->right = NULL;

		p->left = NULL;

		free(p);

	}

	return start;

}






//*********************************************** LENGTH *********************************************//


int length( struct node *start )
{
	struct node *temp;

	int count = 0;

	temp = start;

	while( temp != NULL )
	{
		count++;

		temp = temp->right;
	}

	return count;
}



//******************************************* SEARCHING ELEMENTS ***********************************//



void searching_element(struct node *start)
{
	int search_element,pos = 1;

	printf("Enter the search element.....\n");

	scanf("%d",&search_element);

	struct node *temp = start;

	while( temp != NULL )
	{
		if( temp->data == search_element )
		{
			printf("Iteam %d is founded in position %d..\n",search_element,pos);

			return ;
		}

		temp = temp->right;

		pos++;
	}

	printf("Iteam %d is not founded in the list.....\n",search_element);
}



//********************************************  DISPLAY  ******************************************//




void display(struct node *start )
{
	struct node *temp;

	if( start == NULL )
	{
		printf("List is Empty......\n");

		return ;
	}

	temp = start;

	printf("The list........\n");

	while( temp != NULL )
	{
		printf("%d ",temp->data);

		temp = temp->right;
	}

	printf("\n");

	return ;
}
