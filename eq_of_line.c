// This program is written to solve the equation of a line in the form of ax + by = c.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of variable a , b , and c :");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("The equation of line is %dx+%dy=%d. \n",a,b,c);
    return 0;
}