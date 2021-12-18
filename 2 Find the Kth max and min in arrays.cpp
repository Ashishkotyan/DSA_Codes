//Find the "Kth" max and min element of an array 

//1 using sorting method time c -s n(logn);

#include<iostream>
using namespace std;

int main()
{
	int n,a,b,temp;
	cout<<"Enter the N\n";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting the arrys for \n";
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1 ;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
	cout<<"enter the kth \n";
	int  k;
	cin>>k;
	
	cout<<arr[k-1];
	
	
}
