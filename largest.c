// This Program is written for find out largest number among 3 given number using conditional operator
#include<stdio.h>
int lagest_nu(int a, int b, int c){
    int largest_no;
    printf("\n Enter three integer number to find largest of them: ");
    scanf("%d,%d,%d",&a,&b,&c);

    largest_no = (a>b && a>c)? a : ((b>c)?b:c);

    printf("\n The largest number is %d",largest_no);
    return 0;
}