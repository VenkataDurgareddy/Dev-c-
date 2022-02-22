/*write a c program to find whether the number is divislble by 5 and 10 or not*/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 /*write a c program to find the number is even or odd*/
#include<stdio.h>
main()
{
	int a;
	printf("\n enter the number:");
	scanf("%d",&a);
	if(a%5==0&&a%10==0)
	{
		printf("%d is divisible by 5 and 10",a);
	}
	else
	{
		printf("%d is not divisible by 5 and 10",a);                                                                                                                                                                                                                                                             
	}
}

