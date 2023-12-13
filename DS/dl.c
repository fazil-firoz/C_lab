#include<stdio.h>
#include<stdlib.h>

struct node
	{
	   struct node*rearlink;
        int data;
        struct node*frontlink;
	};

struct node *header=NULL;

void insfrnt(int item)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;	
    new->rearlink=NULL;
	
	if(header==NULL)
	{
        header=new;
        new->frontlink=NULL;
	    printf("\nElement Succesfully inserted at position 1 \n");
	}
	else
	{   
        header->rearlink=new;
        new->frontlink=header;    
        header=new;

	    printf("\nElement Succesfully inserted at position 1 \n");
	}	
}

void insend(int item)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;	
    new->frontlink=NULL;
	int count=0;

	if(header==NULL)
	{

	header=new;
    new->rearlink=NULL;
   
	printf("\nElement Succesfully inserted at position 1 \n");

	}
	else
	{	 
        struct node *temp=header;
        while(temp->frontlink!=NULL)
        {

            temp=temp->frontlink;
            count++;
        }

	temp->frontlink=new;
    new->rearlink=temp;

	printf("\nElement Succesfully inserted at position %d \n",count+2);
	    
	}	
}

