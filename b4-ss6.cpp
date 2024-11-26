#include<stdio.h>
#include<math.h> 
int main(){
	float a, b, c, denta, x1, x2, x3;
	printf("nhap so a: ");
	scanf("%f", &a);
	if (a==0){
		printf("khong phai phuong trinh bac 2");
		return 0; 
	} 
	printf("nhap so b: ");
	scanf("%f", &b);
	printf("nhap so c: ");
	scanf("%f", &c); 
	denta= b * b - 4 * a * c;
	if (denta == 0){
		x3= -b / (2*a); 
		printf("phuong trinh co nghiem kep la: %f", x3); 
	} else if (denta > 0){
		x1=(-b+sqrt(denta))/(2*a);
		x2=(-b-sqrt(denta))/(2*a);
		printf("nghiem thu 1 la: %.2f \n",x1);
		printf("nghiem thu 2 la: %.2f \n",x2);
	} else {
		printf("phuong trinh vo nghiem"); 
	} 
	
	
	
	
	return 0; 
} 
