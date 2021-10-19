#include<iostream>

using namespace std;

int main()
{
	int N=10,arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};

//                   {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0};
	
//	                  -5 5 -2 -8 2 4 7 1 8 0 qans 
	int j=0;
	
	for(int i=0;i<N;i++)
	{
		if(arr[i]<0)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			j++;
		}
			
	}

for(int i=1;i<N;i++){
	
			
		int temp = arr[i];
			arr[i] = arr[N-1];
			arr[N-1] = temp;
			
	
		}
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
