#include<stdio.h>

int main(){
	int N;
	
	//Prompt the user for input
	printf("Enter an upper limit: ");
	scanf("%i", &N);
	
	//Ensure the input is a positive non-zero number
	while(N < 1){
		printf("Please enter a number greater than 0: ");
		scanf("%i", &N);
	}
	
	//Output the serie start with '1' and continue with even nums
	for(int i = 1 ; i <= N ; i *= 2){
		printf("%i ", i);
	}
		            
	return 0;
}