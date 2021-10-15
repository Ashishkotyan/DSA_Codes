#include<iostream>
using namespace std;

int main()
{
	
int	N = 4, K = 2;
 int arr[] = {1, 5, 7, 1};
// int arr[] = {1, 1, 1, 1};
 int count=0;
 for(int i=0;i<N;i++)
 {
 	for(int j=i;j<N;j++)
 	{
 		if(arr[i]+arr[j]==K)
 		{
 			count++;
		 }
	 }
 }
 	cout<<"The pair is ";
	cout<<count;

}
