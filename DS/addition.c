#include <stdio.h>

int add(int num1, int num2);
int main ()
{
	int x;
	x = add (10,20);
	printf("Result = %d" , x);
}

int add (int num1 , int num2)
{
	int res;
	res = num1 + num2;
	return (res);
}
