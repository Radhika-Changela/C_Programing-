#include<stdio.h>
int main(){
	int i,j,row;
	printf("\nEnter the number of row would you like to print in triangle : ");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<i+1;j++){
			printf(" %d ",j);
		}
		printf("\n");
	}
	return 0;
}
