#include<stdio.h>

int main(){
	int N;
	
	//Prompt the user for input
	printf("Enter number of rows: ");
	scanf("%i", &N);
	
	//Ensure the input is greather then 1
	while(N <= 1){
    	printf("Please enter a number greather then 1: ");
    	scanf("%i", &N);
	}
	
	
	//Output the pascal's triangle
	for(int i = 1 ; i <= N ; i++){
		for(int k = 1 ; k <= i ; k++)
			printf("%i", k);
		printf("\n");
	}
	
	return 0;
}