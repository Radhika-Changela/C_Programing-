// this program is written for macro substitution using preprocessor directive #define
#include<stdio.h>
#define NUMBER 10 // preprocessor as macro function
#define sqr(x) (x*x)  // preprocessor as macro function with arguments
#define cube(x) (sqr(x)*x) // preprocessor as nesting of macro function
int main(){
    int i,sum=0,sum_of_sqr=0,sum_of_cube=0;
    for(i=0;i<=NUMBER;i++){
        sum = sum + i;
        printf("\n sum of 0 to %d number = %d",i,sum);
    }
printf("\n\n*****************************************************\n");
    for(i=0;i<=(NUMBER/2);i++){
        sum_of_sqr = sqr(i) + sum_of_sqr;
        printf("\n sum of squre of 0 to %d number = %d",i,sum_of_sqr);
    }
printf("\n\n*****************************************************\n");
    for(i=0;i<=(NUMBER/2);i++){
        sum_of_cube = cube(i) + sum_of_cube;
        printf("\n sum of cube of 0 to %d number = %d",i,sum_of_cube);
    }

    return 0;
}