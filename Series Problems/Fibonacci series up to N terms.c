#include<stdio.h>

int main(){
	int N;
	
	//Prompt the user for input
	printf("Enter number of terms: ");
	scanf("%i", &N);
	
	//Ensure the input is a positive non-zero number
	while(N < 1){
		printf("Please enter a number greater than 0: ");
		scanf("%i", &N);
	}
	
	//Ouptput the series
	int a = 0, b = 1;
	for(int i = 1 ; i <= N ; i++){
		printf("%i ", a);
		int tmp = a+b;
		a = b;
		b = tmp; 
	}

	return 0;
}