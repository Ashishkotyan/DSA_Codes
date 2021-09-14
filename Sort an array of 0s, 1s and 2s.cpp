#include<iostream>
using namespace std;


int main()
{
	int n,arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=0,m=0,r=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			l++;
		}
		else if(arr[i]==1)
		{
			m++;
		}
		else if(arr[i]==2){
			r++;
		}
		
		
	}

	
	for(int i=0;i<l;i++)
	{
		arr[i] =0;
	}
	for(int i=l;i<m;i++)
	{
		arr[i] =1;
	}
	for(int i=m;i<n;i++)
	{
		arr[i] =2;
	}	
	for(int i=0;i<n;i++)
	{
	cout<<arr[i]<<" ";
	}

	
	
}
