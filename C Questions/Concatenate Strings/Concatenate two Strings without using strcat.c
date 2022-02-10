#include<stdio.h>
int main(void)
{
	char str1[30],str2[10];
	int len=0,i=0,j =0;
	printf("Enter your first string:\n");
	scanf("%s",&str1);
	printf("Enter your second string:\n");
	scanf("%s",&str2);	
	/*for(i=0;str1[i] != '\0';i++);
	while(str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';*/
	printf("the entered strings after concatenating is : %s \n",concatenate(str1,str2));
	return 0;
}

char *concatenate(char *str1 , char *str2)
{
	int i=0,j=0;
	for(i=0;str1[i] != '\0';i++);
	while(str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return str1;
}