//this program is written for shorting given numbers in arrayelement using pointer
#include<stdio.h>
int main(){
    int x,i,j,k,temp_var;
    printf("\n Enter the total number stored in array: ");
    scanf("%d",&x);
    int number[x];
    int *ptr = &number[0];
    printf("\n Enter the numbers :\n");
    for(i=0;i<x;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i));
    }
  for(i=0;i<x;i++){
		for(j=i+1;j<x;j++){
			if( number[i]>number[j])
			{
				temp_var = number[i];
		    	number[i] = number[j];
				number[j] = temp_var;
			} 
			}
		printf("\t%d",*(ptr+i));
		}
    
return 0;
}
