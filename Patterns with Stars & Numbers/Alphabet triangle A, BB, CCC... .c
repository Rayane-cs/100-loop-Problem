#include<stdio.h>

int main(){
	int l;
	
	//Prompt the user for input
	printf("Enter number of rows: ");
	scanf("%i", &l);
	
	//Ensure the input is a valid letter
	while(l < 1 || l > 26){
    	printf("Please enter a number btween(1-26): ");
    	scanf("%i", &l);
	}
	
	//Output the alphabet triangle
	char ch = 'A';
	for(int i = 1 ; i <= l ; i++){
		for(int j = 1 ; j <= i ; j++){
			printf("%c", ch);
		}
		ch++;
		printf("\n");
	}
	
	return 0;
}