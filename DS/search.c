#include <stdio.h>

void searching(int n,int a[],int search)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("Your searched element located in %d\n",i);
			flag = 1;
			break;
		}
	}
	if (flag==0)
		printf("Key not found\n");
	

}
	
int main()
{
	int n,a[50],search,i;
	printf("Enter the number of elements in array :");
	scanf("%d",&n);

	printf("Enter the numer:");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Entered array of yours :");
	for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	printf("Enter the element you want to search :");
	scanf("%d",&search);

	searching(n,a,search);
	
}

