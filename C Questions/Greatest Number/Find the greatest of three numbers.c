#include<stdio.h>

int main(void)
{
	int a=0 , b=0, c=0;
	printf("Enter three numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("your entered three numbers  are num1 = %d , num2 = %d, num3 = %d  \n",a,b,c);
	if( a>b && a>c )
		printf("The greatest entered number is = %d\n",a);
	else if( b>a && b>c )
		printf("The greatest entered number is = %d\n",b);	
	else if( c>b && c>b )
		printf("The greatest entered number is = %d\n",a);	
	else
		printf("All the entered numbers are equal = %d\n",a);	
	return 0;
}



