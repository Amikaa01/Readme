#include<stdio.h>
#include<math.h>
int main(){
	
	int n,i,sum=1,j;
	
	printf("Please enter the number: ");
	scanf("%d",&n);
	


	for(i=1;i<=n;i++)
	{
		printf("(");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			if(j<i)
			{
				printf("+");
			}
          
		}
		printf(")");
		
		if(i<n){
		  printf("+");
		}
	}
	
	printf("\n");
	
	return 0;
	
}