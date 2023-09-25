#include<stdio.h>
#include<string.h>

// user define datatype

union _student
{
    char name[100];
    int rollNo;
    float cgpa;
    int rank;
};

struct student
{
    char name[100];
    int rollNo;
    float cgpa;
    int rank;
};

int main(){
    unsigned int union_size,structure_size;
    union _student s1; 
    strcpy(s1.name ,"radhika");   
    s1.rollNo = 202;  
    s1.cgpa = 7.86;   
    s1.rank = 1;

    printf("Strudent name :%s\n",s1.name);
    printf("Strudent rollno:%d\n",s1.rollNo);
    printf("Strudent cgpa :%f\n",s1.cgpa);
    printf("Strudent rank :%d\n",s1.rank);
    printf("\n***********************************************************************************\n");

    // structures in memory

    printf("Addres of the memory location where Strudent name is stored:%u\n",&s1.name);   // all property hold same address of memory location
    printf("Addres of the memory location where Strudent rollno stored:%u\n",&s1.rollNo); 
    printf("Addres of the memory location where Strudent cgpa stored:%u\n",&s1.cgpa);    
    printf("Addres of the memory location where Strudent rank stored:%u\n",&s1.rank);   
    printf("\n***********************************************************************************\n");

    struct student g1 = { "radhika",202,7.86,1};
    printf("Strudent name :%s\n",g1.name);
    printf("Strudent rollno:%d\n",g1.rollNo);
    printf("Strudent cgpa :%f\n",g1.cgpa);
    printf("Strudent rank :%d\n",g1.rank);
    printf("\n***********************************************************************************\n");
    printf("Addres of the memory location where g1 name is stored:%u\n",&g1.name);  // all property hold different` address of memory location 
    printf("Addres of the memory location where g1 rollno stored:%u\n",&g1.rollNo); 
    printf("Addres of the memory location where g1 cgpa stored:%u\n",&g1.cgpa);    
    printf("Addres of the memory location where g1 rank stored:%u\n",&g1.rank);
    printf("\n***********************************************************************************\n");  

    structure_size = sizeof(g1);
    union_size = sizeof(s1);
    printf("\n Size of strucure g1 = %u bytes",structure_size);
    printf("\n Size of union s1 = %u bytes",union_size);
    return 0;
}