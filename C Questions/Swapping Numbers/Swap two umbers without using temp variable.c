#include<stdio.h>

int main(void)
{
	int num1=0 , num2=0;
	printf("Enter two numbers : \n");
	scanf("%d%d",&num1,&num2);
	printf("your entered numbers before swapping are num1 = %d , num2 = %d \n",num1,num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("your entered numbers after swapping are num1 = %d , num2 = %d \n",num1,num2);
	return 0;
}



