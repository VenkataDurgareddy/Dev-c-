/*write a c program to find the greatest of two numbers*/
#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter the 2 numbers:");
	scanf("%d,%d",&a,&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else
	{
		printf("%d is greater than %d",b,a);
	}
}
