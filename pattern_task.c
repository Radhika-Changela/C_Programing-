#include<stdio.h>
int main(){
	int row,col;
	for(row=1;row<=3;row++){
		for(col=1;col<=7;col++){
			if(col==row || col==row+4){
				printf(" * ");
			}
			else if(col==4 && row==2){
				printf(" * ");
			}
			else
			printf("   ");
		}
		printf("\n");
	}
	return 0;
}
