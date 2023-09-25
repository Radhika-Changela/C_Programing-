#include<stdio.h>
#include<string.h>
union _union16{
    unsigned int A : 8;
    unsigned int B : 8;
};
struct structure32{
    unsigned int _a : 16;
    union _union16 u1;
};
union _union64{
    unsigned int a : 16;
    unsigned int b : 16;
    struct structure32 s1;
};
int main(){
 
    union _union16 u1; // A=117,B=56
    u1.A = 44;
    u1.B = 56;
    printf("\n the value of 16bit union A = %u and B = %u",u1.A,u1.B);
    struct structure32 s1;//_a=65534,u1.A=7,u1.B=7
    s1._a = 65534;
    s1.u1.A = 7;
    s1.u1.B = 5;
    printf("\n the value of 32 bit structure _a = %u, _union16 u1 feild A = %u and B = %u",s1._a,s1.u1.A,s1.u1.B);
    union _union64 u2;//a=65432,b=54368,s1._a=12345,s1.u1.A=6,s1.u1.B=6
    u2.a = 65432;
    u2.b = 54368;
    u2.s1._a = 12345;
    u2.s1.u1.A = 6;
    u2.s1.u1.B = 8;
    printf("\n the value of 64 bit union a = %u, b = %u, structure s1 _a = %u, Nd union u1 A = %u,B = %u",u2.a,u2.b,u2.s1._a,u2.s1.u1.A,u2.s1.u1.B);

    return 0;
}