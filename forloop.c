// This program is written to generate a multiplication table using for loop
#include <stdio.h>
int main(){
    int a,b,c;

    printf("Enter the number which table you wants to generate :");
    scanf("%d",&a);

    printf("Multiplication Table of %d\n",a);
    for(b=1;b<=10;b++)
    {
        c=a*b;
        printf("%d * %d = %d \n",a,b,c);
    }
    return 0;
}