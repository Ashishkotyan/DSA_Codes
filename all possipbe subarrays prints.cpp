#include<iostream>
using  namespace std;

int main()
{
	int n ,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Subarrays \n";
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}		// n(n+1)//2; subarrays find;	
		
		
		}
	 } 
		 
	 


