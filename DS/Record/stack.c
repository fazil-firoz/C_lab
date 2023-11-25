#include<stdio.h>
int top,s[10],size;
void push(int item)
{
	if(top>=size-1)
		{	
			printf("stack is full");
		}
	else
		{
			
			top++;
			s[top]=item;
		}
}	

void pop()
{	if(top==-1)
		printf("stack is empty");

	else
		{
		printf("the deleted item:%d",s[top]);
		top--;

		}
}
void disp()
{int i;
	if (top>=0)
		{
			printf("--stack elements--");
				for(i=top;i>=0;i--)
					printf("%d",s[i]);
		}

	else
		printf("stack is empty");
}
int main()
{
	int n,item;
	top=-1;
printf("enter size of the stack (max 10)");
scanf("%d",&size);
if(size<=10 &&size>1)
	{  while(1)
		{
		printf("--basic stack operations--\n\n0)exit\n1)push\n2)pop\n3)display\n");
		scanf("%d",&n);
		
		if(n==0){
			printf("error");
			break;
			}

		else if(n==1){
			printf("enter the item");
			scanf("%d",&item);
			push(item);
				}

		else if(n==2)
			pop();

		else if(n==3)
			disp();
		
		}
	
	}
else{ printf("size doesn't match");
	}
	
		return(0);

}
	
