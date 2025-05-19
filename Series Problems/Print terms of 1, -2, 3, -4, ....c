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
	
	//Output termes	
	for(int i = 1 ; i <= N ; i++){
		if(i % 2 == 0)
			printf("%i,", -i);//Print even numbers negative
		else
			printf("%i,", i);//Print odd numbers positive
	}

	return 0;
}
