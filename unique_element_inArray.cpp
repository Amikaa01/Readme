#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
	int unique=0;
	for(int i=0;i<n;i++)
	{
		unique=arr[i]^unique;
		
	}
	return unique;
}
int main(){
	int n;
	cout<<"Please enter the size of the array"<<endl;
	cin>>n;
	int arr[1000];
	cout<<"Please enter the element of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Unique element in array is "<< unique(arr,n)<<" ";
	return 0;
}