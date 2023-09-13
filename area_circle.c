//This program is written to find the area of a circle given the radius, using a symbolic constant for the value of pi.
#include <stdio.h>
#define PI 3.142 
int main(){
    float r,area;
    printf("Enter the radius value of circle :");
    scanf("%f",&r);

    area = PI*r*r;

    printf("Area of given circle is %.3f. \n",area);
    return 0;
}