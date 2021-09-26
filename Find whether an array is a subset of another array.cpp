#include<iostream>
using namespace std;
incomplete;

int main()
{
	int a2[] = {11, 3, 7, 1};
   int  a1[] = {11, 1, 13, 21, 3, 7};
	int N=6,M=4;
	bool result;
	int count=0;
	int j=0;
	
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(a2[j]==a1[i])
			break;
	    }
	    if(j==M)
	    return result = false;
	}
	return result = true;
	cout<<result;
	
	if(result==true)
	{
		cout<<"yes";
	}
	else{
		cout<<"No";
	}
	
	
}
