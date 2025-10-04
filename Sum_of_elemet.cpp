#include<iostream>
using namespace std;
int main(){

int size;
cout<<"Please enter the size of the array"<<endl;
cin>>size;
int arr[100];
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}
int sum=0;
for(int i=0;i<size;i++)
{
	sum=sum+arr[i];
}

cout<<"Sum of the element in array "<< sum<<endl;
return 0;
}