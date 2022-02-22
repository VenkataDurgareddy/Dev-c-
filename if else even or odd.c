/*write a c program to find the number is even or odd*/
#include<stdio.h>
main()
{
	int a;
	printf("\n enter the number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
}

