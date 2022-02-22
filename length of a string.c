// calculate the length of string
#include<stdio.h>
main()
{
	char str[20];
	int length=0,i;
	printf("enter the string:");
	gets(str);
	printf("String u entered is:");
	puts(str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("Length of a string is %d",length);
}
