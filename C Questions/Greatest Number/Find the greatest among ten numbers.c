#include<stdio.h>

int main(void)
{
	int arr[10], i=0;
	printf("Enter ten numbers : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("your entered ten numbers :\n");
	for(i=0;i<10;i++)
	{
		printf("arr[%d] =  %d \n",i,arr[i]);	
	}
	for(i=0;i<10;i++)
	{
		if(arr[i] > arr[0])
			arr[0] = arr[i];	
	}
	printf("The greatest entered number is = %d\n",arr[0]);	
	return 0;
}



