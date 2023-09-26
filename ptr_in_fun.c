#include<stdio.h>
void square (int n);
void _square(int *n);
int main(){
    int number;
    printf("\nEnter the number =");
    scanf("%d",&number);
    printf("\n************* function call by value ******************");
    square(number);
    printf("\nnumber = %d",number);

    printf("\n************* function call by reference ******************");
    _square(&number);
    printf("\nnumber = %d",number);
    return 0;
}
void square(int n){
    n = n*n;
    printf("\nSquare = %d",n);
}
void _square(int *n){
    *n = (*n)*(*n);
    printf("\nSquare = %d",*n);
}