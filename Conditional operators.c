/*write a c program to illustrate conditional operators*/
#include<stdio.h>
main()
{
	int a,b,x;
	printf("\n enter the 2 numbers:");
	scanf("%d,%d",&a,&b);
	x=(a>b)?a:b;
	printf("Biggest number of %d and %d is %d",a,b,x);
}                     
