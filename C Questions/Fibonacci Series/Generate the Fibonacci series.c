#include<stdio.h>
int recursive_fib(int x);
int fib(int x);
int main(void)
{
	int num=0;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("the fionnacie of the entered number is = %d \n",recursive_fib(num));
	printf("the fionnacie of the entered number is = %d \n",fib(num));
	return 0;
}

int fib(int x)
{
	int i=0,a=0,b=1,c;
	for(i=1;i<x;i++)
	{
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}
int recursive_fib(int x)
{
	if(x < 2)
		return x;
	else
		return recursive_fib(x-1) + recursive_fib(x-2);
}



