#include<stdio.h>
int main(){
	int i;
	for(i=1; i<101; i++){
		printf("%d \n", i);
		if (i % 3 == 0 && i % 5 == 0){
		printf("FizzBuzz \n");
	} else if (i % 3 == 0){
		printf("Fizz\n"); 
	} else if (i % 5 == 0){
		printf("Buzz\n"); 
	} 	 
	} 
	
	
	
	return 0; 
} 
