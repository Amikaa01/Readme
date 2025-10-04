//Write a program to display all odd numbers from 1 to 20

#include<stdio.h>

int main(){
	
	int n,i;
	printf("Please enter the number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			
			printf("%d\t",i);
		}
	}
}