#include <stdio.h>

int add(int num1, int num2);
int main ()
{
	int x;
	int num1 =10, num2 = 20;
	printf("%d %d" , num1, num2);
	x = add (10,20);
	printf("Result = %d" , x);
}

int add (int num1 , int num2)
{
	int res;
	num1 = 30;
	num2 = 40;
	res = num1 + num2;
	return (res);
}
