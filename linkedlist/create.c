#include<stdlib.h>
#include<stdio.h>
struct node

{

	int info;

	struct node *link;

};

struct node *create_list(struct node *start)

{

	int i,n,data;

	printf("Enter the number of nodes : ");

	scanf("%d",&n);

	start=NULL;

	if(n==0)

		return start;

	printf("Enter the element to be inserted : ");

	scanf("%d",&data);

	start=addatbeg(start,data);

	for(i=2; i<=n; i++)

	{

		printf("Enter the element to be inserted : ");

		scanf("%d",&data);

		start=addatend(start,data);	

	}

	return start;

}/*End of create_list()*/
