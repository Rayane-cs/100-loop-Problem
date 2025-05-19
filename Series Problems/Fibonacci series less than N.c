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
	
	//Output the series
	int a = 0, b = 1, tmp = 0;
	while(a < N){
		printf("%i ", a);
		tmp = a + b;
		a = b;
		b = tmp;
	}
	
	return 0;                 
}