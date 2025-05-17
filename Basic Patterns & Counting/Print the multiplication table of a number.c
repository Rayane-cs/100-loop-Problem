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
    //Calculate & Print
	for(int i = 0; i <= 10 ; i++){
        printf("%i * %i = %i\n",N , i, N*i);
    }
    
    return 0;
}
