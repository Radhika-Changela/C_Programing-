//this program is written for shorting given numbers in arrayelement
#include<stdio.h>
int main(){
    int n,i,j,k,temp_var;
    int num[n];
    printf("\n Enter total number of array elements:");
    scanf("%d",&n);
    printf("\nEnter numbers:\n");
    for(i=0;i<n;i++){
        printf("Index-%d:",i);
        scanf("%d",&num[i]);
    }
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				temp_var = num[i];
				num[i] = num[j];
				num[j] = temp_var;
			}
		}
	}
   
    printf("/nThe number shorted in ascending order is given by:");
    for(k=0;k<n;k++){
        printf("\t%d",num[k]);
    }
return 0;
}
