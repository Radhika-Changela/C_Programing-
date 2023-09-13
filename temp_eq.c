//This program is written to convert temperature from Celsius to Fahrenheit.
// Relation between Celsius and Fahrenheit is given by F=(9/5)*C + 32
#include <stdio.h>
int main(){
    float temp_f,temp_c;

    printf("Enter the value of Temperature in Celsius :");
    scanf("%f",&temp_c);

    temp_f = 9*temp_c / 5 + 32;
    printf("The Fahrenheit value of given temperature is %.3f \n",temp_f);

    return 0;
}