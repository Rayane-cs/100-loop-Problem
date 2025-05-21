#include<stdio.h>
#include<stdbool.h>
int main(){
	
	for(int i = 2 ; i <= 100 ; i++){//Counter from 2 to 100
		bool prime = true;
		//Checking if prime
		for(int j = 2 ; j * j <= i ; j++){
			if(i % j == 0){
				prime = false;
				break;
			}
		}
		//Output primes
		if(prime)
			printf("%i ", i);
	}

	return 0;
}