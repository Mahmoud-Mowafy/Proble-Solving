#include<stdio.h>

int main(void)
{
	int num=0, count=0, i=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		if( num % i == 0 )
			count++;	
	}
	if(count == 2 )
		printf("the entered number is Prime \n");
	else
		printf("the entered number is Not Prime \n");
	return 0;
}



