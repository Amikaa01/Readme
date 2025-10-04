//Write a C program to find the given number is palindrome or not. (Hint. Reverse of number issame like 121,141,565 

#include<stdio.h>

int main(){
	int n,d,reverse=0;
	printf("Please enter the number: ");
	scanf("%d",&n);
	int m=n;
	while(m>0)
	{
		d= m%10;
		reverse = reverse*10 + d;
		m=m/10;
		
	}
	
	if(n==reverse)
	{
		printf("%d is palindrome number",n);
		
	}else
	{
		printf("%d is not palindrome number",n);
		
	}
	return 0;
}