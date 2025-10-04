#include<stdio.h>
int main(){
	float bp,da,hra,grpay;
	printf("Enter the value of basic pay of Amit :- ");
	scanf("%f",&bp);
	da = 0.4*bp;
	hra = 0.2*bp;
	grpay = da + bp + hra;
	printf("Basic salary of Amit :- %f\n",bp);
	printf("Dearness allowance of Amit :- %f\n",da);
	printf("House rent allowance of Amit :- %f\n",hra);
	printf("Gross pay of Amit :- %f\n",grpay);
	return 0;	
}

