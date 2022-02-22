// program to print concatenate of two strings
#include<stdio.h>
main()
{
	char str1[20],str2[20],str3[20];
	int i,j;
	printf("Enter the string 1:");
	gets(str1);
	printf("Enter the string 2:");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i]=str1[i];
	}
	for(j=0;str2[j]!='\0';j++,i++)
	{
		str3[i]=str2[j];
	}
	str3[i]='\0';
	printf("\nconcatenate of two strings is= %s",str3);
	
}
