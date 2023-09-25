#include<stdio.h>
void printNumbers(int array[],int n);
void print_Numbers(int *ptr,int n);
int main(){
    int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
     int *ptr =&numbers[0];
    printNumbers(numbers,10);
    printf("\n******************************************************************************\n");
    print_Numbers(numbers,10);
    return 0;

}

void printNumbers(int array[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d \t",array[i]);
    }
}
//array as pointer in function arguments
void print_Numbers(int *ptr,int n){
    for(int i=0;i<n;i++)
    {
        printf("%d \t",*(ptr++));
    }
}