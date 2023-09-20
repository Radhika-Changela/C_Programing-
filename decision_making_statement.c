// this program is written for understanding decision making statements in c
#include <stdio.h>
int main(){
    int a,b,c,d;
    float ratio;

    int sub1,sub2,sub3,sub4,sub5,total;

    printf("\n ********************************************************\n");
    printf("\n Program for finding Ratio using only if statement\n");
    printf("\n ********************************************************\n");

    printf("\nEnter the value of a , b , c , and d :");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);

    if((c-d)!=0)
    {
        ratio = (float)(a+b)/(float)(c-d);
        printf("\nRatio = %f\n",ratio);
    }
    printf("\n ********************************************************\n");
    printf("\n Program for finding Ratio using if...else statement\n");
    printf("\n ********************************************************\n");

    printf("\nEnter the value of a , b , c , and d :");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);

    if((c-d)!=0)
    {
        ratio = (float)(a+b)/(float)(c-d);
        printf("\nRatio = %f\n",ratio);
    }
    else
    printf("\nc - d = 0 , we could not proceed further\n");

    printf("\n ********************************************************\n");
    printf("\n Program for grading the student using else if ladder\n");
    printf("\n ********************************************************\n");

   printf("\n Enter the markes of all 5 subject:\n");
   scanf("%d,%d,%d,%d,%d",&sub1,&sub2,&sub3,&sub4,&sub5);

   total = sub1+sub2+sub3+sub4+sub5;

   if(total>479)
    printf("\nHonours");
   else if(total>359)
    printf("\nFirst Division");
   else if(total>249)
    printf("\nSecond Division");
   else if(total>139)
    printf("\nThird Division");
   else
    printf("\nFail\n");
  
    return 0;

}