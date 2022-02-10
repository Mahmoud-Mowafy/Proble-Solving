#include<stdio.h>
#include<string.h>
int main(void)
{
	char string[10];
	int len=0,i=0,flag =0;
	printf("Enter your string:\n");
	scanf("%s",&string);
	len = strlen(string);
	while(string[i] != '\0')
	{
		if( string[i] != string[len-i-1]  )
		{
			flag =1;
			break;
		}
		i++;
	}
	if( flag == 1)
		printf("the entered string is Not Palindromic \n");
	else
		printf("the entered string is Palindromic \n");
	return 0;
}
