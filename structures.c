#include<stdio.h>
#include<string.h>

// user define datatype

struct student
{
    char name[100];
    int rollNo;
    float cgpa;
    int rank;
};

int main(){
    struct student s1; // declare variable s1 using data type struct student
    strcpy(s1.name ,"radhika");   //   s1.name = "Radhika"  this is show error because we can not edit string 
    s1.rollNo = 202;  // initialize rollNo property of given structure
    s1.cgpa = 7.86;   // initialize cgpa property of given structure
    s1.rank = 1;

    printf("Strudent name :%s\n",s1.name);
    printf("Strudent rollno:%d\n",s1.rollNo);
    printf("Strudent cgpa :%f\n",s1.cgpa);
    printf("Strudent rank :%d\n",s1.rank);
    printf("\n***********************************************************************************\n");

    // structures in memory

    printf("Addres of the memory location where Strudent name is stored:%u\n",&s1.name);   // reserved 100 consicutive bytes for string constant
    printf("Addres of the memory location where Strudent rollno stored:%u\n",&s1.rollNo); // reserved 4 consicutive bytes for integer constant
    printf("Addres of the memory location where Strudent cgpa stored:%u\n",&s1.cgpa);    // reserved 4 consicutive bytes for float constant
    printf("Addres of the memory location where Strudent rank stored:%u\n",&s1.rank);   // reserved 4 consicutive bytes for integer constant
    printf("\n***********************************************************************************\n");
    //if we have more than struct variable than its stored continuous memory location

    struct student g1 = { "radhika",202,7.86,1};
    struct student g2 = { "pinal",201,7.56,2};
    struct student g3 = { "mrunali",196,7.15,3};
    struct student b1 = { "nirav",200,6.59,5};
    struct student b2 = { "jaimeen",156,6.88,4};
    struct student b3 = { "aashish",186,6.23,6};
    
    printf("Strudent name :%s\n",g1.name);
    printf("Strudent rollno:%d\n",g1.rollNo);
    printf("Strudent cgpa :%f\n",g1.cgpa);
    printf("Strudent rank :%d\n",g1.rank);
    printf("\n***********************************************************************************\n");
    printf("Addres of the memory location where g1 name is stored:%u\n",&g1.name);  
    printf("Addres of the memory location where g1 rollno stored:%u\n",&g1.rollNo); 
    printf("Addres of the memory location where g1 cgpa stored:%u\n",&g1.cgpa);    
    printf("Addres of the memory location where g1 rank stored:%u\n",&g1.rank);
    printf("\n***********************************************************************************\n");  

    printf("Strudent name :%s\n",g2.name);
    printf("Strudent rollno:%d\n",g2.rollNo);
    printf("Strudent cgpa :%f\n",g2.cgpa);
    printf("Strudent rank :%d\n",g2.rank);
    printf("\n***********************************************************************************\n");
    printf("Addres of the memory location where g2 name is stored:%u\n",&g2.name);  
    printf("Addres of the memory location where g2 rollno stored:%u\n",&g2.rollNo); 
    printf("Addres of the memory location where g2 cgpa stored:%u\n",&g2.cgpa);    
    printf("Addres of the memory location where g2 rank stored:%u\n",&g2.rank);
    printf("\n***********************************************************************************\n");

    printf("Strudent name :%s\n",g3.name);
    printf("Strudent rollno:%d\n",g3.rollNo);
    printf("Strudent cgpa :%f\n",g3.cgpa);
    printf("Strudent rank :%d\n",g3.rank);
    printf("\n***********************************************************************************\n");
    printf("Addres of the memory location where g3 name is stored:%u\n",&g3.name);  
    printf("Addres of the memory location where g3 rollno stored:%u\n",&g3.rollNo); 
    printf("Addres of the memory location where g3 cgpa stored:%u\n",&g3.cgpa);    
    printf("Addres of the memory location where g3 rank stored:%u\n",&g3.rank);
    printf("\n***********************************************************************************\n");

    printf("Strudent name :%s\n",b1.name);
    printf("Strudent rollno:%d\n",b1.rollNo);
    printf("Strudent cgpa :%f\n",b1.cgpa);
    printf("Strudent rank :%d\n",b1.rank);
    printf("\n***********************************************************************************\n");
    printf("Addres of the memory location where b1 name is stored:%u\n",&b1.name);  
    printf("Addres of the memory location where b1 rollno stored:%u\n",&b1.rollNo); 
    printf("Addres of the memory location where b1 cgpa stored:%u\n",&b1.cgpa);    
    printf("Addres of the memory location where b1 rank stored:%u\n",&b1.rank);
    printf("\n***********************************************************************************\n");  

    printf("Strudent name :%s\n",b2.name);
    printf("Strudent rollno:%d\n",b2.rollNo);
    printf("Strudent cgpa :%f\n",b2.cgpa);
    printf("Strudent rank :%d\n",b2.rank);
    printf("\n***********************************************************************************\n");
    printf("Addres of the memory location where b2 name is stored:%u\n",&b2.name);  
    printf("Addres of the memory location where b2 rollno stored:%u\n",&b2.rollNo); 
    printf("Addres of the memory location where b2 cgpa stored:%u\n",&b2.cgpa);    
    printf("Addres of the memory location where b2 rank stored:%u\n",&b2.rank);
    printf("\n***********************************************************************************\n");

    printf("Strudent name :%s\n",b3.name);
    printf("Strudent rollno:%d\n",b3.rollNo);
    printf("Strudent cgpa :%f\n",b3.cgpa);
    printf("Strudent rank :%d\n",b3.rank);
    printf("\n***********************************************************************************\n");
    printf("Addres of the memory location where b3 name is stored:%u\n",&b3.name);  
    printf("Addres of the memory location where b3 rollno stored:%u\n",&b3.rollNo); 
    printf("Addres of the memory location where b3 cgpa stored:%u\n",&b3.cgpa);    
    printf("Addres of the memory location where b3 rank stored:%u\n",&b3.rank);
    printf("\n***********************************************************************************\n");

    return 0;
}
