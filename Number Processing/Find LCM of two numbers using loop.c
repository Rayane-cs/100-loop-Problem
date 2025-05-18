#include<stdio.h>

int main(){
	int a, b;
	
	//Prompt the user for input
	printf("Enter the first number: ");
	scanf("%i", &a);
	printf("Enter the second number: ");
	scanf("%i", &b);
	
	while(a <= 0){
		printf("Please enter a positive number: ");
		scanf("%i", &a);
	}
	while(b <= 0){
		printf("Please enter a positive number: ");
		scanf("%i", &b);
	}
	
	int i = (a > b)? a : b;
	while(!((i % a) == 0 && (i % b) == 0)){ 
			i++;
	}
	printf("The LCM(%i,%i) = %i\n", a, b ,i);

	return 0;
}