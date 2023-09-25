#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int rollNo;
    float cgpa;
    int rank;
};
void print_info(struct student s);
int main(){
    struct student s1; // declare variable s1 using data type struct student
    strcpy(s1.name ,"radhika");   //   s1.name = "Radhika"  this is show error because we can not edit string 
    s1.rollNo = 202;  // initialize rollNo property of given structure
    s1.cgpa = 7.86;   // initialize cgpa property of given structure
    s1.rank = 1;
    printf("\n********** PRINT INFORMATION *************\n");
    print_info(s1);
    return 0;
}
void print_info(struct student s){
    printf("Strudent name :%s\n",s.name);
    printf("Strudent rollno:%d\n",s.rollNo);
    printf("Strudent cgpa :%f\n",s.cgpa);
    printf("Strudent rank :%d\n",s.rank);
    printf("\n***********************************************************************************\n");
}
