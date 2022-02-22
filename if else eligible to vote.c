/*write a c program to find whether the person is eligible to vote or not*/
#include<stdio.h>
main()
{
int age;
printf("enter the age:");
scanf("%d",&age);
if(age>=18)
{
	printf("\neligible to vote");
}
else
{
	printf("\n noteligible to vote");
}
printf("\n out side if_else"); 
}
