//Write a program to Find the Sum of first 50 Natural Numbers using for Loop

#include<stdio.h>

int main(){
	
	int i,sum=0;
	
	for(i=1;i<=50;i++)
	{
		sum = sum + i;
		
	}
	printf("Sum of 50 natural number is %d",sum);
}