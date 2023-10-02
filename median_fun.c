//this program is written for finding median of given array using function
#include<stdio.h>
void median(int x, int arr[]);
int main(){
    int size,x;
	printf("\nEnter the total number of array element to find its median function:");
	scanf("%d",&size);
	int arr[size];
	for(x=0;x<size;x++){
		printf("\nIndex %d = ",x);
		scanf("%d",&arr[x]);
	}
   // int arr[] = {25,34,12,85,36,10,8,6,69};
    median(size,arr);
    return 0;
}
void median(int n,int arr[]){
    int i,j,temp_var;
    int median_element;
    printf("\nArrange the array element in ascending order:");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp_var = arr[i];
                arr[i] = arr[j];
                arr[j] = temp_var;
            }
        }
        printf("%d\t",arr[i]);
    }
    median_element = arr[n/2];
    printf("\nThe median element of given array is %d",median_element);
}