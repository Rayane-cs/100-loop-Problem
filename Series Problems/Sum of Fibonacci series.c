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
	
	//Calculate the sum
	int a = 0, b = 1, tmp = 0, sum = 0;
	for(int i = 1 ; i <= N ; i++){
		tmp = a+b;
		a = b;
		b = tmp;
		sum += tmp - a;
	}
	
	//Output the sum
	printf("Sum = %i\n", sum);
	
	return 0;
}