#include<stdio.h>

int main(void)
{
	int num=0;
	printf("Enter a number:");
	scanf("%d",&num);
	if( num % 2 == 0)
		printf("the entered number is Even \n");
	else
		printf("the entered number is Odd \n");
	return 0;
}



