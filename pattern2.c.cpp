//Write a program to find the Sum of following Series:
//(1!/1) + (2!/2) + (3!/3) + (4!/4) + (5!/5) + ... + (n!/n)

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	
	unsigned long long n,i,fact=1,sum=1;
	printf("PLease enter the number: ");
	scanf("%llu",&n);
	printf("(1!/1)");
	for(i=2;i<=n;i++)
	{
		fact = fact *i;
		sum = sum + (fact/i);
		printf("+(%llu!/%llu)",i,i);
		
		
	}
	printf("\nSum of the above series is = %llu",sum);
	return 0;
}

