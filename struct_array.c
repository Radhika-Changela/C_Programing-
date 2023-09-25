#include<stdio.h>
#include<string.h>
// structure defination
struct student {
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    struct student EC[5];
    struct student COE[5];
    struct student IT[5];

    printf("\n ************ Enter the data of EC students ************\n");
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d name = ",i+1);
        scanf("%s",&(EC[i].name));
        printf("\nStudent %d roll no = ",i+1);
        scanf("%f",&(EC[i].roll_no));
        printf("\nStudent %d cgpa = ",i+1);
        scanf("%f",&(EC[i].cgpa));
    }
    printf("\n ************ Information of EC students ************\n");
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d name = %s ",i+1,(EC[i].name));
        printf("\nStudent %d roll no = %d ",i+1,(EC[i].roll_no));
        printf("\nStudent %d cgpa = %f\n",i+1,(EC[i].cgpa));
    }
printf("\n---------------------------------------------------------------------------");
    printf("\n ************ Enter the data of COE students ************\n");
     for(int i=0;i<5;i++)
    {
        printf("\nStudent %d name = ",i+1);
        scanf("%s",&(COE[i].name));
        printf("\nStudent %d roll no = ",i+1);
        scanf("%f",&(COE[i].roll_no));
        printf("\nStudent %d cgpa = ",i+1);
        scanf("%f",&(COE[i].cgpa));
    }
    printf("\n ************ Information of COE students ************\n");
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d name = %s ",i+1,(COE[i].name));
        printf("\nStudent %d roll no = %d ",i+1,(COE[i].roll_no));
        printf("\nStudent %d cgpa = %f\n",i+1,(COE[i].cgpa));
    }
    printf("\n---------------------------------------------------------------------------");
    printf("\n ************ Enter the data of IT students ************\n");
     for(int i=0;i<5;i++)
    {
        printf("\nStudent %d name = ",i+1);
        scanf("%s",&(IT[i].name));
        printf("\nStudent %d roll no = ",i+1);
        scanf("%f",&(IT[i].roll_no));
        printf("\nStudent %d cgpa = ",i+1);
        scanf("%f",&(IT[i].cgpa));
    }
    printf("\n ************ Information of IT students ************\n");
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d name = %s ",i+1,(IT[i].name));
        printf("\nStudent %d roll no = %d ",i+1,(IT[i].roll_no));
        printf("\nStudent %d cgpa = %f\n",i+1,(IT[i].cgpa));
    }

    return 0;
}