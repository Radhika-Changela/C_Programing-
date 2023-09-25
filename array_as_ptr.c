#include<stdio.h>
int main(){
    int adhar[5];
    int *ptr = &adhar[0];

    //for input 
    printf("\n Enter the data of adhar to store in array");
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n%d index:",i);
        scanf("%d",(ptr+i));
    }

    //for output
     printf("\nThe data of adhar store in array elements :");
    int j;
    for(j=0;j<5;j++)
    {
      //  printf("\n%d index = %d",j,*(ptr+j));
         printf("\n%d index = %d",j,*(ptr++));  // another way of writing
       //  printf("\n%d index = %d",j,adhar[j]);  // another way of writing
    }

    return 0;
}
