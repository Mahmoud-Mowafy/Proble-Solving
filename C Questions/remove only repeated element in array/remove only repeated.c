#include<stdio.h>

int main(void)
{
	int new_len=0, i=0;
	int arr[11]={4,10,3,1,5,9,7,8,6,2,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Your array before remove doublicates:\n");
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\t",i,arr[i]);
	new_len = removeOnlyrepeated(arr,n);
	printf(" %d\n",new_len);
	return 0;
}

int removeOnlyrepeated(int arr[], int n)
{
	int i,sum=arr[0],com=0;
	for(i=1;i<n;i++)
		sum ^=arr[i];
	for(i=1;i<n;i++)
		com ^=i;	
	return (sum ^ com);	
}
