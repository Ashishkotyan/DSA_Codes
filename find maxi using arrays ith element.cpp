#include<iostream>
using namespace std;

int main()
{
	int max=-199999;
	int n;
	cin>>n;
	int arr[n];
		
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		}	
			
	for( int i=0;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
			cout<<max<<endl;
		
		
		
		}	
		
		cout<<max<<" max";
		
}
