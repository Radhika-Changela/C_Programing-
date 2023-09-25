#include<stdio.h>
int main(){
	
	// declare as three different variable of integer type
	int mark1 = 96;
	int mark2 = 84;
	int mark3 = 89;
	int mpc[3];
	int i = 0,j = 0;
	float price[5];
	
	// declare and initialize int array of size 3
	int marks[3] = {96,84,89};
	printf("\nmarks_1 = %d \t marks_2 = %d \t marks_3 = %d",marks[0],marks[1],marks[2]);

	// declare and initialize char array without given size
	char numbers[] = {'1','2','3','4','5','6','7','8','9'};
	printf("\nnumber: %c \t number: %c \t number: %c \t number: %c \t number: %c \t number: %c \t number: %c \t number: %c"
			,numbers[0],numbers[1],numbers[2],numbers[3],numbers[4],numbers[5],numbers[6],numbers[7]);
	
	// input/output of array
	printf("\nEnter marks of math:");
	scanf("%d",&mpc[0]);
	
	printf("\nEnter marks of phy:");
	scanf("%d",&mpc[1]);
	
	printf("\nEnter marks of chem:");
	scanf("%d",&mpc[2]);
	
	printf("\nMath = %d \t Phy = %d \t Chem = %d",mpc[0],mpc[1],mpc[2]); 
	
	// Array input using scanf and oarray output using printf functions
	printf("\n\nEnter the price of 5 different things:");
	for(i=0;i<5;i++)
	{
		printf("\nprice %d :",i+1);
		scanf("%f",&price[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("price %d = %.3f \t ",i+1,price[i]);
	}
	
	
return 0;

}
