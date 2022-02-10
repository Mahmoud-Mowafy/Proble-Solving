#include<stdio.h>

int main(void)
{
	int num=0;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("the factorial of your entered number is : %d\n",factorial(num));
	printf("the factorial of your entered number is : %d\n",recursive_factorial(num));
	return 0;
}

int factorial(int x)
{
	int result = 1;
	if(x<=0)
		return 1;
	else{
		while(x>0)
		{
			result *= x;
			x--;
		}	
	  	return result;		
	}
}

/**
	using recursive function
*/

int recursive_factorial(int x)
{
	int result = 1;
	if(x<=0)
		return 1;
	else{
	
	  	 return (x*recursive_factorial(x-1));		
    	}	
}