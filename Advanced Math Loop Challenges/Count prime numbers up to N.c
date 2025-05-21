#include<stdio.h>
#include<stdbool.h>
int main(){
	int N;
	
	//Prompt the user for input
	printf("Enter a number: ");
	scanf("%i", &N);
	
	//Ensure the input is a non-negative number
	while(N < 0){
		printf("Please enter a non-negative number: ");
		scanf("%i", &N);
	}
	
	int count = 0;
	
	if(N < 2){
		printf("Number of primes is: %i\n", count);
	}else{
		for(int i = 2 ; i <= N ; i++){//Counter from 2 to 100
			bool prime = true;
			//Checking if prime
			for(int j = 2 ; j * j <= i ; j++){
				if(i % j == 0){
					prime = false;
					break;
				}
			}
			if(prime)
				count++;
		}
			//Output number of primes
				printf("Number of primes is: %i\n", count);
	}

	return 0;
}