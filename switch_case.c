// This program is written for multiple choice selection using switch case statement
#include<stdio.h>
int main(){
    int day,date;

    printf("\nEnter the date:");
    scanf("%d",&date);

    if(date<=31)
    day = date%7;
    else 
    printf("\nINVALID DATE");

    switch(day)
    {
        case 1: printf("\nMONDAY");
                break;
        case 2: printf("\nTUESDAY");
                break;
        case 3: printf("\nWEDNESDAY");
                break;
        case 4: printf("\nTHURSDAY");
                break;
        case 5: printf("\nFRIDAY");
                break;
        case 6: printf("\nSATURDAY");
                break;
        case 0: printf("\nSUNDAY");
                break;
        
        default:printf("\nINVALID INPUT");
                break;
    }

return 0;

}