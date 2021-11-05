#include <bits/stdc++.h>
#include<array>
using namespace std;

//time complexity  O(n)

bool CheckArr( int arr[], int i,int s)
{
	
	if(i == s-1)
	{
		return true;
	}
	
	if(arr[i]<arr[i+1])
	{
		
		return CheckArr(arr,i+1,s);
	}
	
	else{
		return false;
	}
	
	
}



int main()
{
	
	
	int arr[] = {1,2,3,4,5};
	int s = sizeof(arr)/sizeof(arr[0]);
	cout<<CheckArr(arr,0,s);
}
