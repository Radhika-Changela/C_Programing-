#include<stdio.h>
int main(){
    float price = 100.00;
    float *ptr_ = &price;
    float **pptr_ = &ptr_;

    printf("\nPrice = %f",price);
    printf("\nAddress of price variable stored = %u",ptr_);
    printf("\nAddress of pointer value stored =%u",pptr_);

    printf("\n************************************************************\n");

    int i;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("\nEnter the value of variable i :");
    scanf("%d",&i);
    printf("\nPrint the value of variable i using pointer to pointer :");
    printf("\nThe value at pptr show the adress of pointer ptr = %u",*pptr);
    printf("\nThe value at ptr show the adress of variable i = %u",*ptr);
    printf("\nThe value of i using pptr = %d",**pptr);

    return 0;
}