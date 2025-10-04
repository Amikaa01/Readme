//write a program in c whether a triangle(type) is valid or not using angles.
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	float a,b,c,sum;
	
	printf("Please enter the angle of a triangle: ");
	scanf("%f%f%f",&a,&b,&c);
	

	if(a+b+c==180 && a>0 &&b>0 && c>0)
	{
		printf("Triangle is valid");
		if(a!=b && b!=c && c!=a)
		{
			printf("\nTriangle is scalene triangle");
			
		}if(a==b || b==c || c==a)
		{
			printf("\nTriangle is isosceles triangle");
			
		}if(a==90 || b==90 || c==90)
		{
			printf("\nTriangle is right angle triangle");
			
		}if(a==b && b==c && c==a)
		{
			printf("\nTriangle is equilatral triangle");
		}
		
	}else
	{
		printf("Triangle is not valid");
	}
	return 0;
}