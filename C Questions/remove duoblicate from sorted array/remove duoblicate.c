#include<stdio.h>

int main(void)
{
	int new_len=0, i=0;
	int arr[10]={1,2,2,3,4,4,5,7,7,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Your array before remove doublicates:\n");
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\t",i,arr[i]);
	new_len = removeDoublicate(arr,n);
	printf("\n\nYour array after remove doublicates:\n");
	for(i=0;i<new_len;i++)
		printf("arr[%d] = %d\t",i,arr[i]);
	return 0;
}

int removeDoublicate(int arr[], int n)
{
	int i,j;
	for(i=0,j=0;i<n;i++)
	{
		if( arr[i] != arr[i+1] )
			arr[j++] = arr[i];
	}
	return j;
}
