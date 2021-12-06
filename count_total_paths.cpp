#include<iostream>
using namespace std;

int Count_paths(int i,int j,int n,int m)
{
	if(i==n || j==m )
	{
		return 0;
	}
	
	if(i==n-1 && j==m-1)
	{
		return 1;
	}
	
	// move downwords
	int downPaths = Count_paths(i+1,j,n,m);
	
	
	
	// move Rights
	int rightPaths = Count_paths(i,j+1,n,m);
	
	
	cout<<downPaths<<" "<<rightPaths<<endl;
	return downPaths + rightPaths;
	
	
}


int main()
{
	
	int n=3,m=3;
	int total_path = Count_paths(0,0,n,m);
	cout<<total_path;
	
}
