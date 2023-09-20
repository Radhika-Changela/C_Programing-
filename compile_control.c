// This program is written for compiler control directives
#include<stdio.h>
#define ADD
#define MUL
#define TEST
    int main(){
        int a , b , c , d , sum , sub , mul , div;
        printf("\nEnter the value of variables a and b:");
        scanf("%d,%d",&a,&b);

        #ifndef ADD
        sum = a + b;
        printf("\nThe sum of given variables is %d",sum);
        #endif

        sub = a - b ;
        printf("\nThe subtraction of given variables is %d",sub);

        printf("\n********************************************************");

        printf("\nEnter the value of variables c and d:");
        scanf("%d,%d",&c,&d);

        #ifdef MUL
        {
        mul = c * d;
        printf("\n The multiplication of given variables : %d",mul);
        }
        #else
        {
        div = c / d;
        printf("\nThe devision of given variables : %d",div);
        }
        #endif

        printf("\n********************************************************");

        
       #undef TEST 
       #ifdef TEST
        {
            printf("\n TEST IS PASS");
        }
        #endif
    
      return 0;

    }