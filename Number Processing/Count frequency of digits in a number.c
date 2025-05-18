#include<stdio.h>

int main(){
	int num;
	
	//Promt the user for input
	printf("Enter a number :");
	scanf("%i", &num);
	
	if (num < 0) num = -num; // Handle negative numbers

    int arr[10] = {0};

    // Special case: if number is 0
    if (num == 0) {arr[0] = 1;}

    // Count digit frequency
	while(num != 0){
		arr[num % 10]++;
		num /= 10;
	}
	//Print non-zero counts
	for(int i = 0 ; i < 10 ; i++){
		if(arr[i] != 0){
			printf("The frequency of %i is %i.\n", i, arr[i]);
		}
	}

	return 0;
}