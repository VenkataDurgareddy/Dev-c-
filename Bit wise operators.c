/*Bitwise operators*/
#include<stdio.h>
main()
{
int a=40,b=80;
int bit_and,bit_or,bit_xor;
bit_and=a&b;
bit_or=a|b;
bit_xor=a^b;
printf("\n Bitwise And=%d",bit_and);
printf("\n Bitwise OR=%d",bit_or);
printf("\n Bitwise Exclusive or=%d",bit_xor);
printf("\n a right shifted by one position is %d",a>>1);
printf("\n a left shifted by one position is %d",a<<1);
}
