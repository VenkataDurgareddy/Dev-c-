/*write a c program to find whether given number falls in range between 1 t 1000*/
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n>=1 && n<=1000)
	{
		printf("The given number is within the range",n);
	}
	else
	{
		printf("the given number is not within the range",n);
	}
	
}
