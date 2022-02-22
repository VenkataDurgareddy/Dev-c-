/*write a c program to find whether a letter is upper case letter is or not*/
#include<stdio.h>
main()
{
	char ch;
	printf("Enter the letter:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("The given letter %c is upper case letter");
	}
 } 
