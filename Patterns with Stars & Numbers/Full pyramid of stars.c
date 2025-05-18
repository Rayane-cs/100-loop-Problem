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
	
	//Output the pyramid
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N - i ; j++)
			printf(" ");
		for(int k = 1 ; k <= 2 * i - 1 ; k++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}