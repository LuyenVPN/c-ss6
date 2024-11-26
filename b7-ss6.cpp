#include <stdio.h>
int main(){
	int n, i;
	printf("nhap so nguyen bat ki: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		if (n % i == 0)
		printf("%i\n", i);
	} 
	
	
	return 0; 
} 
