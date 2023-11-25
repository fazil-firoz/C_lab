#include <stdio.h>
void mergearray (int a[],int s1,intb[],int s,int merge[])

{
	int i=0
	for (i=0; i<s1; i++)
		merge [i+s1] = b[i];
}

void sortarray (int merge[],int s)
{
	int t;
	for (int i=0;i<s;i++)
	{
		for (int j=i+1 ; j<s ; j++)
		{
			if (merge [i] > merge [j])
			{
				t=merge [i];
				merge [j] = t;
			}
		}
	}
}

int main ()
	{
		int s1,s2,s;
		printf ("Enter the size of the first array");
		scanf("%d",&s1);
		int a[s1];
		printf("Enter the elements of the first array");
		for (int i=0; i<s1; i++)
			{
				scanf("%d",&a[i]);
			}
		printf ("Enter the size of the second array");
		scanf("%d",s2);

		printf ("Enter the elements of second array");
		for (int i=0; i<s;i++)
			{
				scanf("%d",&b[i]);
			}
		int merge [s1+s2]
		s=s1+s2;
		mergearray(a,s1,b,s2,merge);
		sortarray (merge,s);
		printf("merged and sorted arraay :");

		for (int i=0 ; i<s ; i++)
			{
				printf("%d",merge[i]);
				printf("\n");
			}
			return(0);
		
	}
