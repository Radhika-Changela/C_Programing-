#include<stdio.h>
int main(){
    int bit;
    printf("\nEnter the value of total bits of binary number:");
    scanf("%d",&bit);
    int binary[bit],complement[bit];
    printf("\nEnter binary number having %d bit:\n",bit);
    // scan binary number
    int i;
    for(i=0;i<bit;i++)
    {
        scanf("%d",&binary[i]);
    }

    // print given binary number
    printf("\nThe given binary number is:");
    int j;
    for(j=0;j<bit;j++)
    {
        printf("%d",binary[j]);
    }

    // find complement of given number
    int k;
    for(k=0;k<bit;k++)
    {
        if(binary[k]==1)
        {
            complement[k] = 0;
        }
        else
        {
            complement[k] = 1;
        }
    }

    // print complement of number
    printf("\nThe complement of given binary number is:");
    int l;
    for(l=0;l<bit;l++)
    {
        printf("%d",complement[l]);
    }

    return 0;

}