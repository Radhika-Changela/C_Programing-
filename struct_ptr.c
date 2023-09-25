#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll_no;
    float cgpa;
};
int main(){
    struct student s1 = { "Radhika Rajubhai Changela.",202,7.86};

    printf("Strudent name :%s\n",s1.name);
    printf("Strudent rollno:%d\n",s1.roll_no);
    printf("Strudent cgpa :%f\n",s1.cgpa);
    printf("\n***********************************************************************************\n");

    struct student s2 = { "Radhika Vivek Bera.",202,7.86};
    struct student *ptr;
    ptr = &s2;

    printf("Strudent name :%s\n",(*ptr).name);
    printf("Strudent rollno:%d\n",(*ptr).roll_no);
    printf("Strudent cgpa :%f\n",(*ptr).cgpa);
    printf("\n-------------------------------------------------------------------------------------\n");

//using arrow operater
    struct student s3 = { " Vivek Hasmukhbhai Bera.",285,9.2};
    struct student *_ptr = &s3;

    printf("Strudent name :%s\n",_ptr->name);
    printf("Strudent rollno:%d\n",_ptr->roll_no);
    printf("Strudent cgpa :%f\n",_ptr->cgpa);

    printf("\n***********************************************************************************\n");



return 0;
}