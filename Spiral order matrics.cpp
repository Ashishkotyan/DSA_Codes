#include<iostream>
using namespace std;

int main()
{
	int Arr1[] = {1,2,3,4,5}, N=5;
	int Arr2[] = {0,9,8,7,6},  M=6;
	int sum[100];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cout<<Arr1[i]<<Arr2[j]<<" ";
		}
	 	cout<<endl;
   }


	for(int i=0;i<N;i++)
	{ 
		for(int j=0;j<M;j++)
		{
			sum[i] = Arr1[i] + Arr2[j];
			
		}
		cout<<sum[i]<<' ';
	 	cout<<endl;
   }
}

