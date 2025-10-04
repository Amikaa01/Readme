/* Conversion of kilometers */

#include<stdio.h>

int main()

{
	
	float km,m,cm,inch,fit;
	
	printf("\nEnter the distance in kilometer:-");
	
	scanf("%f",&km);
	
	m = km*1000;
	cm = m*100;
	inch = cm/2.54;
	fit = inch/12;
	
	printf("Distance in meter:-%f\n",m);
	
	printf("Distance in centimeter :-%f\n",cm);
	
	printf("Distance in inch :-%f\n",inch);
	
	printf("Distance in fit :-%f\n",fit);
	
	return 0;
	
}
