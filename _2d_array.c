#include<stdio.h>
int main(){
    // array to store 5 students marks of 3 subjects
    float marks[5][3];
    printf("\nEnter first students phy , chem and math marks :");
    scanf("%f,%f,%f",&marks[0][0],&marks[0][1],&marks[0][2]);
    printf("\nEnter second students phy , chem and math marks :");
    scanf("%f,%f,%f",&marks[1][0],&marks[1][1],&marks[1][2]);
    printf("\nEnter third students phy , chem and math marks :");
    scanf("%f,%f,%f",&marks[2][0],&marks[2][1],&marks[2][2]);
    printf("\nEnter fourth students phy , chem and math marks :");
    scanf("%f,%f,%f",&marks[3][0],&marks[3][1],&marks[3][2]);
    printf("\nEnter fifth students phy , chem and math marks :");
    scanf("%f,%f,%f",&marks[4][0],&marks[4][1],&marks[4][2]);

    printf("\n Average marks of first student:%f",((marks[0][0]+marks[0][1]+marks[0][2])/3));
    printf("\n Average marks of second student:%f",((marks[1][0]+marks[1][1]+marks[1][2])/3));
    printf("\n Average marks of third student:%f",((marks[2][0]+marks[2][1]+marks[2][2])/3));
    printf("\n Average marks of fourth student:%f",((marks[3][0]+marks[3][1]+marks[3][2])/3));
    printf("\n Average marks of fifth student:%f",((marks[4][0]+marks[4][1]+marks[4][2])/3));

    return 0;
}