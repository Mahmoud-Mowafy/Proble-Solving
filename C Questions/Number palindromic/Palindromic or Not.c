#include<stdio.h>

int main(void)
{
	int num=0, n=0;
	printf("Enter a number:");
	scanf("%d",&num);
	n = reverse(num);
	if( n == num)
		printf("the entered number is Palindromic \n");
	else
		printf("the entered number is Not Palindromic \n");
	return 0;
}

int reverse(int x)
{
	int rem= 0,rev=0;
	while(x>0)
	{
		rem = x % 10;
		x /= 10;
		rev = rev*10 + rem; 
	}
	printf("%d \n",rev);
	return rev;
}
