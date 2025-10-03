#include<iostream>
using namespace std;
void alternateReverse(int arr[],int n)
{
//	  int i=0;
//    while(i<n-1){
//        swap(arr[i],arr[i+1]);
//        i=i+2;
//    }
//for(int i=0;i<n-1;i=i+2)
//	{
//		int temp=arr[i];
//		arr[i]=arr[i+1];
//		arr[i+1]=temp;
//		
//	}
for(int i=0;i<n;i=i+2)
	{
		if(i+1<n)
		{
			swap(arr[i],arr[i+1]);
		}
		
	}
}

void printArray(int arr[],int n)
{
		cout << "Array after alternate reverse: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
	
}
int main(){
	int n;
	cout<<"Please enter the size of the array:"<<endl;
	cin>>n;
	int arr[100];
	cout<<"Please enter the element of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	alternateReverse(arr,n);
	printArray(arr,n);

	return 0;
}