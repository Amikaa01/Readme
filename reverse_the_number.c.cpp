//Write a program to find the reverse of a given number. 
#include<stdio.h>
int main(){
	
	int n,reverse=0,d,m;
	printf("Please enter the number: ");
	scanf("%d",&n);
	
	m=n;
	
	while(m>0)
	{
		d=m%10;
		reverse=reverse*10 +d;
		m=m/10;
	}
	printf("Reverse of %d is %d",n,reverse);
}