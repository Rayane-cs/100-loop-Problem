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
	
	//Output the sum
	for(int i = 2 ; i <= N ; i+=2){
		printf("%i ",i);
	}



	return 0;
}
