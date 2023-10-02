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
    int f = 1;
    for(int i = 1;i<=x;i++){
        f = f * i;
    }
    return f;
}