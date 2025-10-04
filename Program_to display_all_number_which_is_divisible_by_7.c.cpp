//   Write a program to print all the Numbers Divisible by 7 from 1 to 100.
   #include<stdio.h>

int main(){
	
	int n,i;
//	printf("Please enter the number: ");
//	scanf("%d",&n);
	for(i=1;i<=100;i++)
	{
		
		if(i%7==0)
		{
			printf("%d\t",i);
		}
	}
	
}