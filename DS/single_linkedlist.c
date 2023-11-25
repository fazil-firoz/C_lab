#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
}
struct node*header=NULL;

void insert_at_front(int item)
{
	//for the first node
	struct node*new;
	new=(struct node*) malloc (sizeof(struct node));
	new->data=item;
	if(header==NULL)
	{
		header=new;
		new->link=NULL;
		
	}

	//for the subsequent nodes
	else
	{
		new->link=header;
		//here header is a pointer and it points to the old node so the new node link with point to old node
		header=new;
		//header is pointed to new node
	}

}

void insert_at_end(int item)
{
	//for the first node
	struct node*new;
	new=(struct node*) malloc(sizeof(struct node));
	new->data=item;
	new->link=NULL
	if(header==NULL)
	{
	
		header=new;
		
	}	

	//for the subsequent nodes
	else
	{
		struct node*temp=header;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=new;
	}
}

void insert_at_any_pos(int item,int key)
{
	//for the first node

	struct node*new;
	newnode=(struct node*) malloc(sizeof(struct node));
	new->data=item;
	struct node*temp=header;
	while((temp->data!=key) && (temp->link!=NULL))
			{
				temp=temp->link;
			}
			if(temp->link==NULL) && (temp->data == key))
			{
				new->link = NULL;
				temp->link = new;
			}
	else if ((temp-> link == NULL) && (temp-> data != key))
			{
				printf ("key not found");		
			}
			else
			{
				new-> link= temp-> link;
				temp -> link = new;
			}
}

void del_at_front()
{
	if (header==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node* temp=header;
		header= temp->link;
		free (temp);
	}
}

void del_at_end()
{
	if (header == NULL)
	{
		printf("list is empty");
	}
	else if(header-> link==NULL)
	{
		header = NULL;
	}
	else
	{
		struct node* temp1 = header;
		struct node* temp2 = header;

		while (temp1->link!= NULL)
		{
			temp2 = temp1;
			temp1 = temp1 -> link;
		}

		temp2-> link = NULL;
		free (temp1);
	}
}

void del_at_any_pos (int key)
{
	if (header == NULL)
	{
		printf ("list is empty");
	}

	else
	{
		struct node* temp1=header;
		struct node* temp2 = header;
		while((temp!= NULL) && (temp1 -> data!= key))
		{
			temp2=temp1;
			temp1=temp1->link;
		}
		if(temp1 == NULL)
		{
			printf ("key not found");
		}
		else
		{
			if (temp2-> link == NULL)
			{
				free (temp2);
				header = NULL;
			}

			else
			{
				if (temp1 == header)
				{
					header = temp1->link;
				}
				else
				{
					temp2 -> link=tep1->link;
				}
				free (temp1);
			}
		}
	}
}

void disp()
{
	if (header == NULL)
	{
		printf ("\n___List is Empty___\n");
	}
	else
	{
		struct node * temp = header;
		printf ("\n Entered items are : \n");

		while (temp1=NULL)
		{
			printf ("%d",temp->data);
			temp=temp->link;
		}
		printf ("\n");
	}
}

void Search (int key)
{
	int count = 0;
	if (header == NULL)
	{
		printf ("\n___list is empty____\n");
	}
	else
	{
		struct node* temp1 = header;
		while((temp1->data != key) && (temp1 ->link !=NULL))
		{
		temp1=temp1 -> link;
		count ++;
		}
		if ((temp1 -> link == NULL) && (temp1 -> data != key))
		{
			printf ("key not found");
		}
		else
		{
			printf ("\n key found at position %d\n" count++);
		}
	}
}

int main ()
{
	int z,k,c;
	printf("___LINKED LIST OPERATIONS___\n");
	while (1)
	{
		printf("\n 1.insert at front \n2.insert at end\n 3.insert after position\n 4.Delete at Front\n 5.Delete at end\n 		          6.Delete node at any position\n 7.Display Elements\n 8.search position of Elements 9.Exit");
		printf("\n select the options \n");
		scanf ("%d",&c);
		switch(c)
		{
			case 1:
					printf ("\n Enter the data to insert at front \n");
					scanf("%d",&z);
					insert_at_front (z)
					break;

			case 2:
					printf ("\n Enter the data to insert at end \n");
					scanf ("%d",&z);
					insert_at_end(2);
					break;

			case 3:
					disp();
					printf ("\n___Select THe POsition___\n");
					scanf ("%d",&k);
					printf ("\n Enter the data to insert after the position \n");
					scanf("%d",&z);
					insert_at_any_pos (z,k);
					break;

			case 4:
					del_at_front();
					break;

			case 5:
					del_at_end();
					break;

			case 6:
					disp()
					printf("\n___Select the position___\n");
					scanf ("%d",&k);
					del_at_any_pos (k);
					break;

			case 7:
					disp();
					break;

			case 8:
					printf("\n___Enter the Key___\n");
					scanf ("%d",&k);
					search(k)
					break;

			case 9:
					printf ("\n bye");
					exit(0);
					break;

			default :
					printf ("wrong input");
		}
		
		
	}
	return 0;
}
