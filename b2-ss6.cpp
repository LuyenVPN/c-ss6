#include <stdio.h>

int main(){
	int a, b, c, d, h, tempa=0 , tempb=0 , tempc=0 , tempd=0 , temph=0 , tongchan=0, ta=0, tb=0, tc=0, td=0, th=0, tongle=0;
	printf(" nhap so  nguyen thu nhat: ");
	scanf("%d", &a);
	if (a % 2 == 1){
		tempa = 1; 
	}else {
		ta=1;
	} 
	printf(" nhap so  nguyen thu hai: ");
	scanf("%d", &b);
	if (b % 2 == 1){
		tempb = 1;
	}else {
		ta=b;
	} 
	printf(" nhap so  nguyen thu ba: ");
	scanf("%d", &c);
	if (c % 2 == 1){
		tempc = 1;
	}else {
		tc=1; 
	} 
	printf(" nhap so  nguyen thu tu: ");
	scanf("%d", &d);
	if (d % 2 == 1){
		tempd = 1;
	}else {
		td=1;
	} 
	printf(" nhap so  nguyen thu nam: ");
	scanf("%d", &h);
	if (h % 2 == 1){
		temph = 1;  
	}else {
		th=1; 
	} 
	tongle= ta + tb + tc + td + th;
	tongchan= tempa + tempb + tempc + tempd + temph;
	printf("so luong so le da nhap la: %d\n", tongle);
	printf("so luong so chan da nhap la: %d\n", tongchan);
	
	return 0;
} 
