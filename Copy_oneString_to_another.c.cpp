#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[30],str2[40];
	puts("Enter the string 1: ");
	gets(str1);
	puts("Enter the string 2: ");
	gets(str2);
	
	strcpy(str1,str2);
	
	printf("String 1: %s\t  string 2: %s",str1,str2);
	return 0;
}