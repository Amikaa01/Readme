#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	int length;
	puts("Enter the string: ");
	gets(str);
	
	length=strlen(str);
	printf("Length of the string is %d\n",length);
	return 0;
}