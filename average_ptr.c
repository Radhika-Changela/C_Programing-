// this program is written for find average of numbers stored in array using pointer
#include<stdio.h>
int main(){
    int x,i;
    float sum,average;
    sum = 0;
    printf("\n Enter the total number stored in array to find its average : ");
    scanf("%d",&x);
    int number[x];
    int *ptr = number;
    printf("\n Enter the numbers :\n");
    for(i=0;i<x;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i));
        sum = sum + *(ptr+i);
    }
    average = sum / x;
    printf("\nThe average of given numbers = %f",average);

    return 0;

}
