#include<stdio.h>

int main(){
	int num;
	
	//Prompt the user for input
	printf("Enter a number: ");
	scanf("%i", &num);
	
	if(num == 0){
		printf("0");
		return 0;
	}
	if(num < 0){
		printf("- ");
		num = -num;
	}
	
	//Print digits in reverse
	while(num != 0){
		printf("%i ", num % 10);
		num /= 10;
	}
	
	return 0;
}