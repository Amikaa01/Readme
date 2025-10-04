#include<stdio.h>

int main(){
	
	int n,i,max,min;
	printf("Please enter size of the aray: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Please enter the element of the array: ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max = a[0];
	min = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			
		}if(a[i]<min)
		{
			min = a[i];
			
		}
	}
	printf("Maximum element is %d and minimum element is %d",max,min);
	

return 0;
}