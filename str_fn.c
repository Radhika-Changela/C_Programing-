#include<stdio.h>
#include <string.h>
int main(){
    char first_name[50];
    char second_name[15];
    char last_name[15];
    int length_str;

    printf("\n Enter your first name:");
    gets(first_name);
    printf("\n Enter your second name:");
    gets(second_name);
    printf("\n Enter your last name:");
    gets(last_name);

    strcat(first_name,second_name);     // strcat() join two different string without including white space between them
    puts(first_name);
    strcat(first_name,last_name);
    puts(first_name);

    length_str = strlen(first_name);     // strlen() gives length of string
    printf("\n Total lenth of your name is %d characters including white space.",length_str);

    char str1[] = "radhika";
    char str2[] = "vivek";
    int str_cmp = strcmp(str1,str2);    // strcmp()  compare two strings and return integer value
    printf("\nstr_1:");
    puts(str1);
    printf("\nstr_2:");
    puts(str2);
    if(str_cmp==0)
    printf("\nBoth strings are same.");
    else if(str_cmp>0)
    printf("\nFirst string is larger than second string.");
    else
    printf("\nFirst string is smaller than second string.");

    char _str_1[10];
    char _str_2[10];
    printf("\nEnter first string value:");
    gets(_str_1);
    printf("\nString 1:");
    puts(_str_1);
    printf("\nEnter second string value:");
    gets(_str_2);
    printf("\nString 2:");
    puts(_str_2);
    strcpy(_str_1,_str_2);    // copy the content of _str_2 into _str_2
    printf("\nNew value of First string:");
    puts(_str_1);

    
    return 0;

}