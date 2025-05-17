#include<stdio.h>


int main(){
	
	int num, pwr;
	
	//Prompt the user for Input
	printf("Enter a number N :");
	scanf("%i",&num);
	printf("Enter the power :");
	scanf("%i",&pwr);
	
	//Calculating the power
	if(num == 1){printf("%i power %i = 1",num ,pwr);}
	if(num == 0 || pwr == 0){printf("%i power %i = 0",num ,pwr);}
	if(pwr == 1){printf("%i power %i = %i",num ,pwr,num);}
	else if(pwr > 0){
		int r = num ;
		for(int i = 1 ; i < pwr ; i++){
			r *= num;
		}
		printf("%i power %i = %i",num ,pwr,r);
	}
	else {
		float r = num ;
		for(int i = 1 ; i < -pwr ; i++){
			r *= num;
		}
		printf("%i power %i = %f",num ,pwr,1/r);
	}
	
return 0;
}
