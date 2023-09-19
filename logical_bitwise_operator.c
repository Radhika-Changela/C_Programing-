// this program is written for logical and bitwise operator
#include<stdio.h>
int main(){
    int b1,b2,and,or,not,bit_and,bit_or,bit_xor,shift_right,shift_left,size;
    printf("\n Enter two integer number b1 and b2:");
    scanf("%d,%d",&b1,&b2);
    
    size = sizeof(b1);
    printf("\n The size of integer number is %d bit.",size);

    // Bitwise operation 
    bit_and = b1 & b2;
    printf("\n bitwise and operation of b1: %d and b2: %d is given by : %d",b1,b2,bit_and);
    bit_or = b1 | b2;
    printf("\n bitwise or operation of b1: %d and b2: %d is given by : %d",b1,b2,bit_or);
    bit_xor = b1 ^ b2;
    printf("\n bitwise exor operation of b1: %d and b2: %d is given by : %d",b1,b2,bit_xor);
    shift_right = b1 >> 2;
    size = sizeof(shift_right);
    printf("\n The size of shift_right is %d bit.",size);
    printf("\n bitwise right shift of 2 position of b1: %d given by : %d",b1,shift_right);
    shift_left = b2 << 1;
    size = sizeof(shift_left);
    printf("\n The size of shift_left is %d bit.",size);
    printf("\n bitwise left shift of 1 position of b2: %d given by : %d",b2,shift_left);

    // Logical operation
    if(b1<b2 && b1 != 0)
    printf("\n Number b1 = %d is less than b2 = %d and it is not zero.");
    else
    printf("\nTest Failed.");

    if(b1>b2 || b1 < 10)
    printf("\n Number b1 = %d is lessthan 10.");
    else
    printf("\nTest Failed.");

    if (b1!=b2)
    printf("\n Number b1 = %d is not equalto b2 = %d.");
    else
    printf("\nTest Failed.");

    return 0;
}