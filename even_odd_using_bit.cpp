#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Please enter the number:"<<endl;
	cin>>n;
	int s=n & 1;
	if(s==0)
	{
		cout<<"Even"<<endl;
	}else
	{
		cout<<"Odd"<<endl;
	}
	return 0;
}