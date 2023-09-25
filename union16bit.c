#include<stdio.h>
struct regbit {
    unsigned int r0:1;
    unsigned int r1:1;
    unsigned int r2:1;
    unsigned int r3:1;
    unsigned int r4:1;
    unsigned int r5:1;
    unsigned int r6:1;
    unsigned int r7:1;
    unsigned int r8:1;
    unsigned int r9:1;
    unsigned int r10:1;
    unsigned int r11:1;
    unsigned int r12:1;
    unsigned int r13:1;
    unsigned int r14:1;
    unsigned int r15:1;
};// 16 bit structure define with 1 bit element
union reg{
    unsigned int status : 1 ;
    struct regbit r;
}; // 16 bit union with 16 1 bit structure variable

int main(){
    union reg R;
    R.status = 0;
    R.r.r0 = 0;
    R.r.r1 = 1;
    R.r.r2 = 1;
    R.r.r3 = 0;
    R.r.r4 = 0;
    R.r.r5 = 1;
    R.r.r6 = 0;
    R.r.r7 = 0;
    R.r.r8 = 1;
    R.r.r9 = 0;
    R.r.r10 = 1;
    R.r.r11 = 0;
    R.r.r12 = 0;
    R.r.r13 = 1;
    R.r.r14 = 1;
    R.r.r15 = 0;
    printf("\n the value of status flag = %d",R.status);
    printf("\n the value of regbit 0 = %d",R.r.r0);
    printf("\n the value of regbit 1 = %d",R.r.r1);
    printf("\n the value of regbit 2 = %d",R.r.r2);
    printf("\n the value of regbit 3 = %d",R.r.r3);
    printf("\n the value of regbit 4 = %d",R.r.r4);
    printf("\n the value of regbit 5 = %d",R.r.r5);
    printf("\n the value of regbit 6 = %d",R.r.r6);
    printf("\n the value of regbit 7 = %d",R.r.r7);
    printf("\n the value of regbit 8 = %d",R.r.r8);
    printf("\n the value of regbit 9 = %d",R.r.r9);
    printf("\n the value of regbit 10 = %d",R.r.r10);
    printf("\n the value of regbit 11 = %d",R.r.r11);
    printf("\n the value of regbit 12 = %d",R.r.r12);
    printf("\n the value of regbit 13 = %d",R.r.r13);
    printf("\n the value of regbit 14 = %d",R.r.r14);
    printf("\n the value of regbit 15 = %d",R.r.r15);
    printf("\n R.regbit = %d",R.r);
    return 0;
}
  