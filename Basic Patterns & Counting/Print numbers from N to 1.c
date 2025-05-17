#include<stdio.h>


int main(){

	int N;
	 
	//Prompt the user for Input
	printf("Enter a number N :");
	scanf("%i",&N);
	
	//Insure the input is a positive number
	while(N <= 0){
		printf("Please enter a positive nmbr : ");
		scanf("%i",&N);
	}
	
	//The output
	for(int i = N ; i >= 1 ; i--){
        printf("%i ",i);
    }


	return 0;
}
