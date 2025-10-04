#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[40],str2[40];
	puts("Enter the string 1: ");
	gets(str1);
	puts("Enter the string 2: ");
	gets(str2);
	
	int temp=strcmp(str1,str2);
	
	if(temp==0)
	{
		printf("Bothe string are same");
		
	}else
	{
		printf("Bothe string are not same");
		
	}
	return 0;
	
}