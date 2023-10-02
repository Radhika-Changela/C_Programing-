#include<stdio.h>
int fectorial(int x);
int main(){
    int n,fect;
    printf("\nEnter the number to find its fectorial:");
    scanf("%d",&n);
    fect= fectorial(n);
    printf("%d fectorial = %d",n,fect);
    return 0;
}
int fectorial(int x){
   if(x==1)
    return 1;
    else
    return x*fectorial(x-1);
}