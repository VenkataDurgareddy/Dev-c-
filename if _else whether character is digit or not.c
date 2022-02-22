/*write a c program to find whether the given character is digit or not*/
#include<stdio.h>
main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
	{
		printf("The given character %c is not a digit:",ch);
	}
	else
	{
		printf("The given character %c is a digit:",ch);
	}
}
