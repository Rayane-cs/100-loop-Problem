#include<stdio.h>

int main(){
	
	for(int i = 1; i <= 1000; i++){
		
		//Count number of digits
		int d = 0 , tmp = i;
		while(tmp != 0){
			d++;
			tmp /= 10;
		}
	
		//Extract and raise each digit
		int sum = 0;
		tmp = i;
		while(tmp != 0){
			int digit = tmp % 10;
			for(int j = 1 ; j < d ; j++){
				digit *= tmp % 10;
			}
			sum += digit;//Sum all powered digits
			tmp /= 10;
		}
		
		//Print...if armstrong
		if(i == sum)
			printf("%i ",i);
	}


	return 0;
}