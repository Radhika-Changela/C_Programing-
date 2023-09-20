// this program is written for include a file in program using #include preprocessor directive
#include<stdio.h> // standard library function include
#include<math.h>  // standard math function library file include
#include"largest.c" // include file from current directory to find largest number amoung three.
int main(){
    int a,b,c;
    double sq_root,cb_root,exponential;
    printf("\nEnter the number to find its square root : ");
    scanf("%d",&a);
    sq_root = sqrt(a);
    printf("\n The square root of %d is %f.",a,sq_root);

    printf("\nEnter the number to find its cube root : ");
    scanf("%d",&b);
    cb_root = cbrt(b);
    printf("\n The cube root of %d is %f.",b,cb_root);

    printf("\nnter the value of x to find E^x : ");
    scanf("%d",&c);
    exponential = exp(c);
    printf("\n The value of E^%d is %f.",c,exponential);

    lagest_nu(a,b,c);

    return 0;

}