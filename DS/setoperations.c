#include <stdio.h>
#include <stdlib.h>
char alp[26]={	"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

char s1[26];
char s2[26];

int bs1[26],bs2[26],bi[26],c1[26],c2[26];
int k,z;

void getele(){
	printf(" Enter max element for set1\n");
	scanf ("%d",&z);
	for(k=0;k<z;k++)
	{
		scanf("%s",&s1[k]);
	}
	bit (s1,bs1,z);
	printf("Enter maximum element for set2\n");
	scanf("%d",&z);
	printf("Enter maximum element for set2\n");
	scanf("%d",&z);
	for(k=0;k<z;k++)
	{
		scanf("%s",&s2[k]);
	}
	bit(s2,bs2,z);
}

void bit (char s[26],int bs[26],int z)
{
	int i;
	int j;
	for(i=0;i<26;i++)
	{
		bs[i]=0;
	}
	for (i=0;i<z;i++)
	{
		for (j=0;j<26;j++)
		{
			if (s[i]==alp[j])
			{
				bs[j]=1;
			}
		}
	}
}

void un()
{
	int i;
	for (i=0 ; i<26 ; i++)
	{
		bit[i]=0;
	}
	for(i=0;i<26;i++)
	{
		bi[i]=bs1[i] | bs2[i]; 
	}
}

void in (int bs1[26],int bs2[26])
{
	int i;
	for (i=0;i<26;i++)
	{
		bi[i]=0;
	}
	for(i=0;i<26;i++)
	{
		bi[i]=bs1[i] & bs2[i];
	}
}

void com(int bs[26],int c[26])
{
	int i;
	for (i=0;i<26;i++)
	{
		if(bs[i]==1)
		{
			c[i]=0
		}
		else
		{
			c[i]=1;
		}
	}
}

void disp(int b[26])
{
	int i;
	printf("UNI SET :");
	for(i=0;i<26;i++)
	{
		printf("%c",alp[i]);
	}
	printf ("\n");
	printf ("BIT SET :");
	for(i=0;i<26;i++)
	{
		printf("%d",b[i]);
	}
	printf ("\n");
	printf("FINE SET :");
	for (i=0;i<26;i++)
	{
		if (b[i]==1)
		{
			printf ("%c",alp[i]);
		}
		else
		{
			printf (" ");
		}
	}
}

int main ()
{
	int c;
	getele();
	printf("___SET OPERATIONS USING BIT VECTOR---\n");
	while (1)
		{
			printf ("\n 1.UNION \n2.INTERSECTION \n3.COMPLEMENT OF SET1 \n4.COMPLEMENT OF SET2 \n5.SET DIFFERENCE \n6.GET ELEMENTS FOR BOTH SET \n7.EXIT");
			printf ("\n SELECT THE OPTIONS \n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:un();
						printf("\n UNION OPERATION \n");
						disp (bi);
						break;

				case 2:in(bs1,bs2);
						printf ("\n INTERSECTION OPERATION \n");
						disp(bi);
						break;

				case 3:com (bs1 , c1);
						printf ("\n COMPLEMENT OPERATION OF SET 1 \n");
						disp (c1);
						break;

				case 4:com(bs2,c2);
						printf("\n COMPLEMENT OPERATION OF SET 2 \n");
						disp(c2);
						break;

				case 5:com (bs2,c2);
						printf ("\n SET DIFFERENCE OPERATION OF SET 1 \n");
						in (bs1,c2);
						disp(bi);
						break;

				case 6:getele();
						break;

				case7:printf ("End");
						exit (0);
						break;

				default:printf ("\n wrong input..\n");

				
			}
			
		}

	return 0;
}
