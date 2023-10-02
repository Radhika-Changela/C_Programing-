#include<stdio.h>
int main(){
	int i,j,k,n,a;
	printf("\nEnter number of row to be printed : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=(n-i);j>=0;j--){
			printf("   ");
		}
		for(k=1,a=0;k<=(2*i-1);k++){
			a=a+1;
			printf(" %d ",a);
		}
		printf("\n");
	}
	return 0;
}
