/*struct node

{

	int info;

	struct node *link;

};*/

struct node *addatbeg(struct node *start,int data);

struct node *addatend(struct node *start,int data);

struct node *addafter(struct node *start,int data,int item);

struct node *addbefore(struct node *start,int data,int item);

struct node *addatpos(struct node *start,int data,int pos);

struct node *del(struct node *start,int data);

struct node *reverse(struct node *start);

