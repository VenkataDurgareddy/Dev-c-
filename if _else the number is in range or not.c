/*write a c program to find whether the number is falls in range between 1 to 1000*/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 /*write a c program to find the number is even or odd*/
#include<stdio.h>
main()
{
	int n;
	printf("\n enter the number:");
	scanf("%d",&n);
	if(n>=1&&n<=1000)
	{
		printf("%d is within the range",n);
	}
	else
	{
		printf("%d is not within the range ",n);                                                                                                                                                                                                                                                             
	}
}

