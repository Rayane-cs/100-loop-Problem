#include<stdio.h>

int main(){
	int n;
	
	//Prompt the user for input
	printf("Enter number of rows: ");
	scanf("%i", &n);

	//Ensure the input is a positive number
	while(n <= 0){
    	printf("Please enter a positive number: ");
    	scanf("%i", &n);
	}
		
	//Output the triangle
	for(int i = n ; i >= 1 ; i--){
		for(int j = 1 ; j <= i ; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}