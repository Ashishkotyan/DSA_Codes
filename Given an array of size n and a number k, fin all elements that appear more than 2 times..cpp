#include<iostream>
using namespace std;



int main()
{

    int N = 9, k=4;
	int Arr[] = {3, 1, 2, 2, 1,4, 2, 3,2, 3};
			
	int count=0;
	int result=0;
	for(int i=0;i<N;i++)
	{
		count=0;
		for(int j=i;j<=N;j++)
		{
			if(i!=j&&Arr[i]==Arr[j]){
			
			{
				count++;
			}			
		                            }
		}
		if(count>=2){
		
		cout<<Arr[i]<<"="<<count<<endl;
	}
	}
   
	for(int i=0;i<N;i++)
	{
		cout<<Arr[i]<<" ";
	}
	
}
