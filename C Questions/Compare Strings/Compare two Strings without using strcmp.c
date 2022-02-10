#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[10],str2[10];
	int len=0,i=0,flag =0, str1_asci=0, str2_asci=0;
	printf("Enter your first string:\n");
	scanf("%s",&str1);
	printf("Enter your second string:\n");
	scanf("%s",&str2);	
	int difference=0;
	while(str1[i] != '\0')
	{
		str1_asci += str1[i] ;
		i++;
	}
	i=0;
	printf(" The asci of the first string is = %d\n",str1_asci);
	while(str2[i] != '\0')
	{
		str2_asci += str2[i];
		i++;
	}
	printf(" The asci of the first string is = %d\n",str2_asci);
	difference = str1_asci - str2_asci;
	i=0;
	while(str1[i] != '\0')
	{
		if( str1[i] != str2[i]  )
		{
			flag =1;
			break;
		}
		i++;
	}
	if( flag == 1)
	{
	    printf("the entered strings are Not equal \n");
		printf("the entered strings difference = %d \n",difference);
	}
	else
		printf("the entered strings are equal \n");
	return 0;
}
