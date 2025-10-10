#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sort(int arr[],int n)
{
	int left=0,right=n-1;
	while(left<right)
	{
		while(arr[left]==0 && left<right)
		{
			left++;
		}
		while(arr[right]==1 && left<right)
		{
			right--;
		}
		if(left<right)
		{
			swap(arr[left],arr[right]);
			left++;
			right--;
		}
	}
}
int main(){
	
	int size;
	cout<<"Please enter the size of the array: "<<endl;
	cin>>size;
	int arr[1000];
	cout<<"Please enter the element of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	sort(arr,size);
	printArray(arr,size);
	return 0;
}