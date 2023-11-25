#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *header = NULL;

void insert_at_front (int item)
{

	//for the first node
	struct node * newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	if(header==NULL)
	{
		newnode-> data = item;
		newnode-> link = NULL;
	}
	else
	{
		//for the subsequent nodes
		newnode->data = item;
		newnode -> link =header;
	}
	header=newnode;

	
	
}

void_insert_at_end()
{

}

void traversal()
{
	struct node *ptr;
	ptr = header;
	while(ptr != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->link;
	}
}


int main()
{
	insert_at_front(10);
	insert_at_front(20);
	traversal();
	return(0);

}


