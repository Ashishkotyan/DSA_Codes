#include<iostream>
using namespace std;



int main()
{
	
	int arr[] = {1,4,2,56,7,4,2};
	int n = 7;
	int temp=0;
	
	int count=1;
	while(count<n)
	{
		
		for(int i=0;i<n-count;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
			 
		}
		count++;
		
	}
	
//	
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(arr[i]>arr[j])
//			{
//				temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
