// to read a string using gets
#include<stdio.h>
main()
{
	char str[20];
	printf("Enter the string:");
	gets(str);
	printf("string u entered is:");
	puts(str);
}
