//this program is written for finding median of given array using pointer
#include<stdio.h>
int main(){
    int size,x;
	printf("\nEnter the total number of array element to find its median function:");
	scanf("%d",&size);
	int arr[size];
	for(x=0;x<size;x++){
		printf("\nIndex %d = ",x);
		scanf("%d",&arr[x]);
	}
   // int arr[] = {25,52,12,85,36,10,87,69,69};
    int *ptr = arr;
    int i,j,temp_var;
    int median_element;
    printf("\nArrange the array element in ascending order:");
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp_var = arr[i];
                arr[i] = arr[j];
                arr[j] = temp_var;
            }
        }
        printf("%d\t",*(ptr+i));
    }
    median_element = arr[size/2];
    printf("\nThe median element of given array is %d",median_element);
    return 0;
}