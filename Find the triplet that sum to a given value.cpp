#include<iostream>
using namespace std;


int main()
{

int n = 6, X = 13;
int arr[] = {1 ,4 ,45, 6, 10, 8};

int sum=0,count=0;			 						
int k=n-1;
for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
			{
		
				if(arr[i]+arr[j]+arr[k]==X)
				{
					cout<<" yes "<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k];
						return true;
				}
						else if(X > arr[i]+arr[j]+arr[k])
							{
								i++;
							}
								else{
										k--;
									}
			}	
		
	}
}

