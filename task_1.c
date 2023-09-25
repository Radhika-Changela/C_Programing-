#include<stdio.h>
#include<string.h>
struct _structure16{      // structure with size of 16 bit
    int a : 4;
    int b : 4;
    int c : 8;
};
union _union32{          // union with size of 32 bit
    int variable_1 : 16;
    struct _structure16 A;   // A is a 16 bit structure variable
};
struct _structure64{         // structure with size of 64 bit
    unsigned int _a : 8;
    unsigned int _b : 8;
    unsigned int _c : 16;
    union _union32 _A; // _A is a 32 bit union variable
};
//*********************************************************************************************
int main(){
    struct _structure16 A; 
    A.a = 4;   // in binary = 4'b0100
    A.b = 12;  // in binary = 4'b1100;
    A.c = 246; // in binary = 8'b11110110.

    printf("\n the value of a feild in _structur16 = %d",A.a);
    printf("\n the value of b feild in _structur16 = %d",A.b);
    printf("\n the value of c feild in _structur16 = %d",A.c);

    printf("\n------------------------------------------------------");
    union _union32 _A;
    _A.variable_1 = 56881;
    _A.A.a = 5; // in binary = 4'b0101
    _A.A.b = 10;//in binary = 4'b1010
    _A.A.c = 125;// in binary = 8'b01111101

    printf("\n the value of variable_1 feild in _union32 = %d",_A.variable_1);
    printf("\n the value of _structure16  feild in _union32 = %d , %d , %d",_A.A.a,_A.A.b,_A.A.c);

    printf("\n------------------------------------------------------");
  
    struct _structure64 a;
    a._a = 58;
    a._b = 112;
    a._c = 56651;
    a._A.variable_1 = 45632;
    a._A.A.a = 7;
    a._A.A.b = 7;
    a._A.A.c = 7;

    printf("\nthe value of _a variable in _structure64 = %u",a._a);
    printf("\nthe value of _b variable in _structure64 = %u",a._b);
    printf("\nthe value of _c variable in _structure64 = %u",a._c);
    printf("\nthe value of _union32 in _structure64 = %d,%d,%d,%d",a._A.variable_1,a._A.A.a,a._A.A.b,a._A.A.c);

    return 0;
}
