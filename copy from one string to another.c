// copy one string to another string
#include<stdio.h>
main()
{
	char str1[20],str2[20];
	int i;
	printf("enter the string:");
	gets(str1);
	printf("string 1 is:");
	puts(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("After copy string 2 is %s",str2);
	
}
