#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=4;j>=i;j--){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("*");
		}
	}
	
	return 0;
}