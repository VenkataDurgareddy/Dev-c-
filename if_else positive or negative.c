/*write a c program to find the number is positive or negative*/
#include<stdio.h>
main()
{
	int a;
	printf("\n enter the number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else
	{
		printf("%d is negative",a);
	}
}
