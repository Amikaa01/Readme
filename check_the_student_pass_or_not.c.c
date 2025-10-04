#include<stdio.h>
int main(){
	int marks;
	printf("Enter the marks(0-100) : ");
	scanf("%d",&marks);
	
	if  (marks<30){
		
		printf(" Grade C \n");
		printf("Poor!! \n");
		
		
	}
	else if (marks>=30 && marks <70){
	  
	  printf("Grade B \n");
	  printf(" Very Good!! \n");
	  
	}
	else if (marks>=70 && marks <90){
		printf("Grade A \n");
		printf("Great!! \n");
		
		
	}
	else if (marks >=90 && marks <= 100){
		printf("Grade A+ \n");
		printf("Excellent!! \n");
	}
	else {
		printf("Wrong input \n");
	}
	

	return 0;
}
