#include<stdio.h>

int main(){
	
	int n;
	printf("Please enter the size of an arry: ");
	scanf("%d",&n);
	
	int a1[n][n],a2[n][n],a3[n][n],i,j,k,sum=0;
	printf("Please enter the value of a1: ");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("Matrix 1:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a1[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = sum + a1[i][j];
		}
	}
	printf("Sum of the element in array is = %d",sum);
	
		printf("\nPlease enter the element of a2: ");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	
	printf("Matrix 2:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a2[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a3[i][j]=0;
			for(k=0;k<n;k++)
			{
				a3[i][j]=a3[i][j] + a1[i][k]*a2[k][j];
				
			}
		}
	}
	
	printf("Matrix multiplication:\n");
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			printf("%d\t",a3[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}