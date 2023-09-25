#include<stdio.h>
void printString(char arr[]);
int main(){
    char name[]={'R','A','D','H','U','\0'};
    char _name[]="RADHIKA";
    char firstName[10];
    char lastName[10];
    char fullName[25];
    char _Name[25];

    printString(name);
    printString(_name);
    printf("\n***********************************************************************************");

    printf("\nEnter your first name:");
    scanf("%s",firstName);
    printf("\nEnter your last name:");
    scanf("%s",lastName);
    printf("\nYour name is %s %s",firstName,lastName);
    printf("\n***********************************************************************************"); 


    printf("\nEnter your full mane:");
    scanf("%s",fullName);
    printf("\nYour full name: %s",fullName);
    printf("\n***********************************************************************************");

    /*printf("\nEnter your full name again:");
    gets(_Name);
    printf("\nYour full name :");
    puts(_Name);
    printf("\n***********************************************************************************");*/


    return 0;
}

void printString(char arr[]){

    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
   printf("\n");
} 

