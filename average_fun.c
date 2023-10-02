// this program calculate the average of given numbers using function
#include<stdio.h>
void average_num(int arr[],int n);
int main(){
    int x,i; 
    printf("\nEnter the total number to find its average:");
    scanf("%d",&x);
    int num[x];
    printf("\nEnter the number in array element:\n");
    for(i=0;i<x;i++){
        printf("Index_%d:",i);
        scanf("%d",&num[i]);
    }
    average_num(num,x);

    return 0;
}
void average_num(int arr[],int n){
    int i,sum = 0;
    float average;
    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    average = (float)sum/n;
    printf("\nThe average of given numbers = %f",average);

}
