#include<stdio.h>

int main(){
	int num, zeros = 0;
	
	//Promt the user for input
	printf("Enter a number: ");
	scanf("%i", &num);
	
	int tmp = num;
	if(num == 0){
		zeros = 1;
	}else {
		
		//Counting freqeuncy of digit '0'
		while(tmp != 0){
			if((tmp % 10) == 0){zeros++;}
			tmp /= 10;
		}
	}
	
	//Output the result
	printf("The number of zeros in %i is %i.\n", num, zeros);
	
	return 0;
}