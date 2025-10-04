#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n,i,*ptr,sum=0;
	printf("Please enter the numeber: ");
	scanf("%d",&n);
	
	ptr=(int *)calloc(n,sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Error! Memory not allocated");
		exit(0);
		
	}
	
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum = sum + *(ptr + i);
		
	}
	ptr=(int *)realloc(ptr,n+1);
		for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum = sum + *(ptr + i);
		
	}
	
	printf("Sum of the number is %d",sum);
	free(ptr);
	return 0;
}