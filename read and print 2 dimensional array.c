// c program to read and print 2D array of size 3x4
#include<stdio.h>
int main()
{
	int a[3][4],i,j;
	printf("Enter the elements in to a matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	 printf("elements in a matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
      
	}
}
