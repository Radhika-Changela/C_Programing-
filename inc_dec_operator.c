// this program is written for checking variable value after use of incremet/decrement operators
#include<stdio.h>
int main(){
    int a,b,c,d,x,y,z;
    a = 5;
    b = ++a; // here first add 1 into a and than pass to variable b.so value of a and b are 6
    printf("\n b = %d   a = %d",b,a);
    c = a--;    // here the value of a is 6 copy into c and than decremented by 1 in a. so value of c=6 and a =5
    printf("\n c = %d   a = %d",c,a);

    d = b + (--c)*(++b);// first evaluate --c=5 and ++b=7 so new b=7 
    printf("\n d = %d  c = %d   b = %d",d,c,b);

    x =a + c-- * 4/++b - d; // first evaluate c-- and ++b than multipiation and division at last adding and subtracting
    printf("\n a = %d  b = %d  c = %d x = %d",a,b,c,x);

    y =  24 % 5 + 2 * ++x - d * 2; // its evalute x and than multiply with 2 and than d*2 and last remainder and than addition and subtraction
    printf("\n x= %d d = %d  y = %d ",x,d,y);

    return 0;
}