#include<stdio.h>
int main(){
	int i,j,k,a,b;
	int row,coll;
	printf("\nEnter the odd number of row to be printed in diamond :");
	scanf("%d",&row);
	for(i=1;i<=(row+1)/2;i++){
		for(j=(row/2);j>=i;j--){
			printf("   ");
		}
		for(k=1,a=0;k<=(2*i-1);k++){
			a=a+1;
			printf(" %d ",a);
		}
		printf("\n");
	}
	for(i=1;i<(row+1)/2;i++){
		for(j=1;j<=i;j++){
			printf("   ");
		}
		for(k=1,b=0;k<=row-(2*i);k++){
			b=b+1;
			printf(" %d ",b);
		}
		printf("\n");
	}
	return 0;
}
