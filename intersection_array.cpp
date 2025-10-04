#include<iostream>
using namespace std;
int intersection(int arr[],int brr[],int n){
	int inter;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				inter=arr[i];
			}
		}
	}
	return inter;
}
int main(){
	
	int n;
	cout<<"Please enter the size of the array"<<endl;
	cin>>n;
	int arr[1000],brr[1000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		cin>>brr[j];
	}
	cout<<intersection(arr,brr,n)<<" ";
	return 0;
}