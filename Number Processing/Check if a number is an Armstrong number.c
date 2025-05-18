#include<stdio.h>

int main(){
	int num, sum = 0;
	
	//Prompt the user for input
	printf("Enter a number: ");
	scanf("%i", &num);

	//Count number of digits
	int d = 0 , tmp = num;
	while(tmp != 0){
		d++;
		tmp /= 10;
	}

	//Extract and raise each digit
	tmp = num;
	while(tmp != 0){
		int digit = tmp % 10;
		for(int i = 1 ; i < d ; i++){
			digit *= tmp % 10;
		}
		sum += digit;//Sum all powered digits
		tmp /= 10;
	}
	
	//Verifying if the number is armstrong
	if(num == sum)
		printf("The number %i is armstrong.\n",num);
	else
		printf("The number %i isn't armstrong.\n",num);

	return 0;
}