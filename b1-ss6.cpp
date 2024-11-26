#include <stdio.h>

int main(){
	int a, b, c, d, h, tempa=0 , tempb=0 , tempc=0 , tempd=0 , temph=0 , tong=0 ;
	printf(" nhap so  nguyen thu nhat: ");
	scanf("%d", &a);
	if (a % 2 == 1){
		tempa = a;
	}
	printf(" nhap so  nguyen thu hai: ");
	scanf("%d", &b);
	if (b % 2 == 1){
		tempb = b;
	}
	printf(" nhap so  nguyen thu ba: ");
	scanf("%d", &c);
	if (c % 2 == 1){
		tempc = c;
	}
	printf(" nhap so  nguyen thu tu: ");
	scanf("%d", &d);
	if (d % 2 == 1){
		tempd = d;
	}
	printf(" nhap so  nguyen thu nam: ");
	scanf("%d", &h);
	if (h % 2 == 1){
		temph = h;  
	}
	tong= tempa + tempb + tempc + tempd + temph;
	printf("Tong cac so le da nhap la: %d", tong);
	
	return 0;
} 
