#include<stdio.h>

int main(){
	int N;
	
	//Prompt the user for input
	printf("Enter number of rows: ");
	scanf("%i", &N);
	
	//Ensure the input is a positive number
	while(N <= 0){
    	printf("Please enter a positive number: ");
    	scanf("%i", &N);
	}	
	
	//Output the floyed's triangle
	int p = 1;
	for(int i = 1 ; i <= N ; i++){
		for(int k = 1 ; k <= i ; k++){	
			printf("%i ", p);
			p++;
		}
		printf("\n");
	}
	
	return 0;
}