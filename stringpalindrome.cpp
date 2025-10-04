#include<stdio.h>
#include<string.h>

int main(){
	
	char a[20],b[40];
	
	puts("Enter the string to check weather the number is palindrome or not: ");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("String are palindrome");
		
	}else
	{
		printf("String are not palindrome");
	}
	return 0;
}