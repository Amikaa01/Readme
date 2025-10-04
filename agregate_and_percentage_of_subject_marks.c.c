#include<stdio.h>

int main()

{
	
	int math,physics,chemistry,english,hindi,agregate;
	
	float percentage;
	
	printf("Enter the marks of math:-");
	
	scanf("%d",&math);
	
	printf("Enter the marks of physics:-");
	
	scanf("%d",&physics);
	
	printf("Enter the marks of chemistry :-");
	
	
	scanf("%d",&chemistry);
	
	printf("Enter the marks of english :-");
	
	scanf("%d",&english);
	
	printf("Enter the marks of hindi :-");
	
	scanf("%d",&hindi);
	
	agregate = math+physics+chemistry+english+hindi;
	
	percentage = agregate/5;
	
	printf("Agregate marks = %d\n",agregate);
	
	printf("Percentage %f\n",percentage);
	
	return 0;
	
	
	
}
