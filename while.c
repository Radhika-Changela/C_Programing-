//This program is written for reverse the digits of number using while loop
#include<stdio.h>
int main(){
    int number,new_no;
    int remainder;
    int i = 6;
    printf("\nEnter the 6 digit number :");
    scanf("%d",&number);

    while(i!=0 )
    {
       new_no = number/10;
       remainder = number%10;
       printf("%d",remainder);
       number = new_no;
       i--;
    }

    return 0;
}