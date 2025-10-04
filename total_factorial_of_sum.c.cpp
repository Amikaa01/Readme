#include<stdio.h>

int main(){
	
	int n,i,sum=1,fact=1;
	printf("Please enter the number: ");
	scanf("%d",&n);
	printf("%d! ",1);
	for(i=2;i<=n;i++)
	{
		printf("+ %d! ",i);
			fact=fact*i;
			sum = sum + fact;
		
	}
	printf("\nSum is %d",sum);
	return 0;
}