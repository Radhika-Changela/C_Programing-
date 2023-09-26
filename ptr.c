#include<stdio.h>
int main(){
    int age = 25;
    int *ptr = &age;
    int _age = *ptr;

     printf(" \n value stored in variable age = %d ",age);
     printf(" \n value stored in variable _age = %d ",_age);

     printf(" \n value stored in variable age using pointer = %d ",*ptr);
     printf(" \n value stored in variable _age using pointer= %d ",*ptr);

     printf(" \n memory adress of Age variable = %u ",&age);
     printf("\n the adress stored in ponter variable = %p",ptr);
     printf("\n the adress stored in ponter variable = %u",ptr);

     printf("\n**************************************************************************************************\n");

     int age_;   int *a = &age_;
     float weight;  float *w = &weight;
     char gender;   char *g = &gender;

     printf("\n Enter your age , weight , and gender:");
     scanf("%d,%f,%c",&age_,&weight,&gender);
     printf("\nYour age is %d and its stroed in memory adress %u",age_,a);
     printf("\nYour weight is %.3f and its stroed in memory adress %u",weight,w);
     printf("\nYour gender is %c and its stroed in memory adress %u",gender,g);
    return 0;
}
