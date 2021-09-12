#include<iostream>
using namespace std;

int main()
{
	int n,temp;
	cout<<"ENter the size of arrays\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of arrays\n";
	for(int i=0;i<n;i++)
	
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	
	{
		cout<<arr[i]<<" ";
	}
	int i=0;
	n-1;
	while(i<n)
	{
		 temp = arr[n];
		 arr[n] = arr[i];
		 arr[i] = temp;
		 i++;
		 n--;
	}
	cout<<"Reverse\n";
	 for(int i=1;i<6;i++)
	
	{
		cout<<arr[i]<<" ";
	}
	
	
}
