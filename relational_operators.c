// This program is written for relational operators
#include<stdio.h>
int main(){
    int age_1,age_2;
    float weight_1,weight_2,hight_1,hight_2;
    printf("\n Enter the age of person 1 ,his hight and his weight:");
    scanf("%d,%f,%f",&age_1,&hight_1,&weight_1);
    printf("\n Enter the age of person 2 ,his hight and his weight:");
    scanf("%d,%f,%f",&age_2,&hight_2,&weight_2);

    if(age_1<age_2)             // use of less than for comparing age
    printf("\n Person 1 is younger than person 2.");
    else
    printf("\n Person 2 is older than person 1.");

    if(weight_1>weight_2)      // use of greater than for comparing weight
    printf("\n Person 1 is heavier than person 2.");
    else
    printf("\n Person 2 is heavier than person 1.");

    if(hight_1==hight_2)       // use of equall to operator for comparing hight
    printf("\n Person 1 is as taller as person 2.");
    if(hight_1!=hight_2)       // use of equall to operator for comparing hight
    printf("\n Person 1 and person 2 are not same in hight.");
    if (hight_1<= hight_2)    // use of less than equall to operator for comparing hight
    printf("\n Person 1 is shorter than person 2.");
    if (hight_1>= hight_2)   // use of greater than equall to operator for comparing hight
    printf("\n Person 1 is taller than person 2.");
    return 0;

}