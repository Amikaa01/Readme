#include<iostream>
using namespace std;
void tripletsum(int arr[],int size,int target)
{
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			
			for(int k=j+1;k<size;k++)
			{
				if(arr[i]+arr[j]+arr[k]==target){
					cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<",";
					
				}
			}
		}
	}

}
int main(){
	int size,target;
	cout<<"Please enter the size of the array: "<<endl;
	cin>>size;
		cout<<"Please enter the target of the array: "<<endl;
	cin>>target;
	int arr[1000];
	cout<<"Pleas entre the element of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	tripletsum(arr,size,target);
	return 0;
}