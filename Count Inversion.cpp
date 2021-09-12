#include<iostream>

using namespace std;


int main()
{
	int  N= 5;
//	int = arr[] = {2, 4, 1, 3, 5};
	int arr[] = {2, 3, 4, 5, 6};
	int inv=0;
	for(int i=0;i<N;i++)
	{
		for(int j=i;j<N;j++)
		{
			if(arr[i]>arr[j])
			{
				inv++;
			}
		}
	}
	
	cout<<inv;
	
	
	
	
}
