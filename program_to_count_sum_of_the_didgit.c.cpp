//Write a program to count the sum of digits in the entered number

#include<stdio.h>

int main(){
	
	int n,count=0;
	printf("Please enter the number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("Number of digits is %d",count);
}