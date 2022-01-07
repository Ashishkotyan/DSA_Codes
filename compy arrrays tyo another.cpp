#include<iostream>
using namespace std;
int main()
{
	int arr[5]= {10,20,30,40,50};
	int cop[5];
	int j=0;
	
	for(int i=4;i>=0;i--)
	{
		cop[j] = arr[i];
		j++;
	}
	
	for(int j=0;j<=4;j++)
	cout<<cop[j]<<" ";
	
	
	
	
}
