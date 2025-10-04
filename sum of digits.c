#include<stdio.h>
int main(){
	int n,ones,tense,sum;
	printf("Please enter the number : ");
	scanf("%d",&n);
	
	if(n<10 || n>99)
	{
		printf("Please enter a valide number : ");
		
	}else {
		
		ones = n%10;
		tense = n/10;
		sum = ones + tense;
		printf("Sum of  %d digits = %d",sum);
		
	}
	return 0;
	
	
}
