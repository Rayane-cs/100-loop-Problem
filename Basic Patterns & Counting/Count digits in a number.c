#include<stdio.h>


int main(){

	int num, d = 0; // 'd' counter for digits
	
	//Prompt the user for Input
	printf("Enter a number N :");
	scanf("%i",&num);
	
	if(num > -10 && num < 10){
		d = 1;
		printf("The number %i has %i digit.",num, d);
	}else{
		if(num < 0){num = -num;}
		int tmp = num;
		while(tmp != 0){
			tmp/=10;
			d++;
		}
		printf("The number %i has %i digit.",num, d);
	}
	


	return 0;
}
