#include<stdio.h>

int main(){
	int num, sum = 0;
	
	//Prompt the user for input
	printf("Enter a number: ");
	scanf("%i", &num);
	
	if(num < 0){
		num = -num;
	}
	
	//Calculate sum of digits
	int tmp = num;
	while(tmp != 0){
		sum += tmp % 10;
		tmp /= 10;
	}
	
	//Output the Sum
	printf("Sum of digits of %i is: %i \n", num, sum);

	return 0;
}