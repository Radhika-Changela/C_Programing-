//this program is written for shorting given numbers in arrayelement using function
#include<stdio.h>
void sort_fun(int n,int arr[]);
int main(){
	int x,i;
	printf("\nEnter the size of array : ");
	scanf("\n%d",&x);
	int number[x];
	printf("\nEnter the value of array elements :\n");
	for(i=0;i<x;i++){
		printf("index_%d =",i);
	    scanf("%d",&number[i]);
	}
	sort_fun(x,number);
	return 0;
}
void sort_fun(int n,int arr[]){
	int j,k,l,temp_var;
	printf("\nNumbers shorted in ascending order :");
	for(j=0;j<n;j++){
		for(k=j+1;k<n;k++){
			if(arr[j]>arr[k]){
				temp_var = arr[j];
				arr[j] = arr[k];
				arr[k] = temp_var;
			}
		}
		printf("%d \t",arr[j]);
	}
}
/*void sort_num(int x,int arr[]);
int main(){
	int num[] = {25,36,12,14,51,25,96,45,36,9};
	sort_num(10,num);
	return 0;
}
void sort_num(int x,int arr[]){
	int i,j,k,temp_var;
		printf("\nNumbers shorted in ascending order :");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				temp_var = arr[i];
				arr[i] = arr[j];
				arr[j] = temp_var;
			}
		}
		printf("%d \t",arr[i]);
	}
	
}
*/
