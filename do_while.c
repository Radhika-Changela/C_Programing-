// THis program is written for finding the value of x using do....while loop.
// where x=a/(b-c)
#include <stdio.h>
int main(){
    float a,b,c;
    float x;
do{
    printf("Give the value of variables a , b and c : ");
    scanf("%f,%f,%f",&a,&b,&c);

    if(b!=c){
        x=a/(b-c);
        printf("The value of x is %.2f \n",x);
    }
else
    printf("The value of denomenator is 0. \n Please enter the proper value of variable. \n");
}
while(b==c);
    return 0;

}