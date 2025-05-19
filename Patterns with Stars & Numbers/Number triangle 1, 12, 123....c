#include<stdio.h>

int main(){
	int N;
	
	//Prompt the user for input
	printf("Enter number of rows: ");
	scanf("%i", &N);
	
	//Ensure the input is a positive number
	while(N <= 0){
    	printf("Please enter a positive number: ");
    	scanf("%i", &N);
	}	
	
	//Output the number triangle
	for(int i = 1 ; i <= N ; i++){
		for(int k = 1 ; k <= i ; k++)
			printf("%i", k);
		printf("\n");
	}
	
	return 0;
}