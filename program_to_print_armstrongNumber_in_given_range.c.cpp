// Write a program to Print Armstrong Number from 1 to 1000.
#include<stdio.h>
int main(){
	
	int n,d,reverse,m,temp;
	
	for(n=1;n<=1000;n++)
	{
		
		m=n;
		temp=n;
		reverse=0;
		
		while(m>0)
		{
			d=m%10;
			reverse=reverse + (d*d*d);
			m=m/10;
		}
			if(reverse==temp)
	
		printf("%d\t",temp);
	
	}

	return 0;
}