#include<stdio.h>

int main(){
	int num;
	
	//Promt the user for input
	printf("Enter a number :");
	scanf("%i", &num);
	
	//Ensure the input is a positive number
	while(num < 0){
		printf("Enter a non-negative number: ");
		scanf("%i", &num);
	}
	
	long long int fac = 1; //Can compute factorials up to 20! without overflow
	
	//Calculate the factorial
	for(int i = num ; i > 1 ; i--){
		fac *= i;
	}
	
	//Output the result
	printf("The factorial of %i is %lld.\n", num, fac);

	return 0;
}