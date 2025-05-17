#include<stdio.h>

int main(){
	int N, Sum = 0;
	 
	//Prompt the user for Input
	printf("Enter a number N :");
	scanf("%i",&N);
	
	//Insure the input is a positive number
	while(N <= 0){//loop stoped when user enter positive number
		printf("Please enter a positive nmbr : ");
		scanf("%i",&N);
	}
    //Calculate the Sum
	for(int i = 1 ; i <= N ; i++){
        Sum += i;// Sum = Sum + i
    }
    
    //Output the result
    printf("The sum of %i numbers is : %i",N,Sum);
    
    return 0;
}
