// this program written for arithmatic operation
#include<stdio.h>
int int_arithmatic( int a, int b);                  // sub function decalaration
float real_arithmatic( float x, float y);            // sub function decalaration
float mix_mode_arithmatic(float p, float q);          // sub function decalaration

// main program started here


int main(){
    int n1,n2;
    float m1,m2;

    printf("\n Enter two integer number : ");
    scanf ("%d,%d",&n1,&n2);

    printf("\n Enter two real number : ");
    scanf ("%f,%f",&m1,&m2);

    printf("\n*********************************************************\n");
     printf("\n----------INTEGER ARITHMATIC OPERATIONS-----------------\n");
     printf("\n*********************************************************\n");

    int_arithmatic(n1,n2);  // function calling for integer arithmatic operations

    printf("\n--------------------------------------------------------\n");

    printf("\n*********************************************************\n");
     printf("\n----------REAL ARITHMATIC OPERATIONS-----------------\n");
     printf("\n*********************************************************\n");

    real_arithmatic(m1,m2); // function calling for real arithmatic operations

    printf("\n--------------------------------------------------------\n");

    printf("\n*********************************************************\n");
     printf("\n----------MIX-MODE ARITHMATIC OPERATIONS-----------------\n");
     printf("\n*********************************************************\n");

    mix_mode_arithmatic(m1,n1); // function calling for mix mode of arithmatic operations

    printf("\n--------------------------------------------------------\n");

    return 0;

}
// function defination of integer arithmatic operations

int int_arithmatic(int a, int b){
    int sum,sub,mul,div,modulo;

       sum = a+b;
       sub = a-b;
       mul = a*b;
       div = a/b;
    modulo = a%b;

    printf("\n Addition of given integer numbers %d and %d is = %d .",a,b,sum);
    printf("\n Subtraction of given integer numbers %d and %d is = %d .",a,b,sub);
    printf("\n Multiplication of given integer numbers %d and %d is = %d .",a,b,mul);
    printf("\n Division of given integer numbers %d and %d is = %d .",a,b,div);
    printf("\n Remainder left after division of given integer numbers %d and %d is = %d .",a,b,modulo);

}

// function defination of real arithmatic operations

float real_arithmatic(float x, float y){
    float sum,sub,mul,div;

       sum = x+y;
       sub = x-y;
       mul = x*y;
       div = x/y;

    printf("\n Addition of given real numbers %.3f and %.3f is = %.3f .",x,y,sum);
    printf("\n Subtraction of given real numbers %.3f and %.3f is = %.3f .",x,y,sub);
    printf("\n Multiplication of given real numbers %.3f and %.3f is = %.3f .",x,y,mul);
    printf("\n Division of given integer real %.3f and %.3f is = %.3f .",x,y,div);

}
    
    // function defination of mix mode arithmatic operations

float mix_mode_arithmatic(float p, float q){
    float sum,sub,mul,div;

       sum = p+q;
       sub = p-q;
       mul = p*q;
       div = p/q;

    printf("\n Addition of given real numbers %.3f and %.3f is = %.3f .",p,q,sum);
    printf("\n Subtraction of given real numbers %.3f and %.3f is = %.3f .",p,q,sub);
    printf("\n Multiplication of given real numbers %.3f and %.3f is = %.3f .",p,q,mul);
    printf("\n Division of given real numbers %.3f and %.3f is = %.3f .",p,q,div);
    
}

