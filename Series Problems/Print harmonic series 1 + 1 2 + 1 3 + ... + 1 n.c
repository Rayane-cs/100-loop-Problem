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
	
	//Output termes	
	printf("1 + ");
	for(int i = 2 ; i <= N ; i++){
		if(i == N){
			printf("1/%i", i);
			break;
		}
		printf("1/%i + ", i);
	}

	return 0;
}
