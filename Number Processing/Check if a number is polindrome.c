#include<stdio.h>

int main(){
	int num, rev_num = 0;
	
	//Promt the user for input
	printf("Enter a number :");
	scanf("%i", &num);
	
	//Ensure the input is a positive number
	while(num < 0){
		printf("Please enter a positive number :");
		scanf("%i", &num);
	}
	
	int tmp = num;
	
	//Reverse the number
	while(tmp != 0){
		rev_num = rev_num * 10 + (tmp % 10);
		tmp /= 10;
	}
	
	//Check if palindrome & ouptut result
	if(num == rev_num)
		printf("The number %i is palindrome.\n",num);
	else
		printf("The number %i isn't palindrome.\n",num);
		
	return 0;
}