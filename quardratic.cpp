//write a program in c to find out the roots of quadratic equation.

#include<math.h>
#include<stdio.h>

int main(){
	double a,b,c,root1,root2,d;
	printf("Please enter the coefficient of the quardratic equation: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	d= (b*b) - (4*a*c);
	root1 = (-b+ sqrt(d)/(2*a));
	root2 = (-b- sqrt(d)/(2*a));
	if(d>0)
	{
		printf("Roots are equal and distinct");
		printf("\nRoot1=%.2lf and Root2 = %.2lf",root1,root2);
		
	}if(d==0)
	{
		printf("Roots are equal");
		printf("\nRoot1=%.2lf and Root2 = %.2lf",root1,root2);
	}else
	{
		printf("Roots are imaginary");
		printf("\nRoot1=%.2lf and Root2 = %.2lf",root1,root2);
	}
	return 0;
}