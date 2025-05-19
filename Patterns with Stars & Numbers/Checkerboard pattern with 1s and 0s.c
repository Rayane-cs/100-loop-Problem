#include<stdio.h>

int main(){
	int rows, col;
	
	//Prompt the user for input
	printf("Enter number of rows: ");
	scanf("%i", &rows);
	printf("Enter number of collums: ");
	scanf("%i", &col);
	
	//Ensure the input is a positive number
	while(rows < 1){
    	printf("Please enter a positive number: ");
    	scanf("%i", &rows);
	}
	while(col < 1){
    	printf("Please enter a positive number: ");
    	scanf("%i", &col);
	}
	
	//Output Checkerboard pattern	
	for(int i = 1 ; i <= rows ; i++){
		for(int j = 1 ; j <= col ; j++){
			if((i + j) % 2 == 0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	return 0;
}