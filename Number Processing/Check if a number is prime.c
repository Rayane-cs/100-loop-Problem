#include<stdio.h>

int main(){
	int num;
	
	//Prompt the user for input
	printf("Enter a number: ");
	scanf("%i", &num);
	
	//Ensure the input is a non-negative number
	while(num < 0){
		printf("Enter a non-negative number: ");
		scanf("%i", &num);
	}
	
	if(num < 2){
		printf("The number %i isn't prime.\n",num);
		return 0;
	}
	
	//Check if prime
	int is_prime = 1;
	for(int i = 2 ; i * i <= num ; i++){// Check if num has any divisor up to vnum
		if((num % i) == 0){
			is_prime = 0;
			break;
		}
	}
	
	//Output result
	if(is_prime)
		printf("The number %i is prime.\n",num);
	else
		printf("The number %i isn't prime.\n",num);

	return 0;
}