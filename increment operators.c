/*write a c program to illustrate increment operators*/

#include<stdio.h>
main()
{
	int x,y,i,j;
	i=10;
	j=15;
	x=++i;
	y=j++;
	printf("x=%d",x);
	printf("\nx=%d",++x);
	printf("\ny=%d",y++);
	printf("\ny=%d",y);
}
