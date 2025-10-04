//Any year is input through the keyboard. Write a
//program to determine whether the year is a leap year or not.

#include<stdio.h>
#include<conio.h>

int main(){
	
	int year;
	printf("Please enter the years: ");
	scanf("%d",&year);
	
	if(year%400==0 || year%100!=0 && year%4==0)
	{
		printf("This year is leap year");
		
	}else
	{
		printf(" This year is not leap year");
		
	}
	return 0;
	
}