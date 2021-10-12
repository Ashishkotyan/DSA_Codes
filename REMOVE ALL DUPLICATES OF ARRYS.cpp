#include<iostream>
using namespace std;

int main()
{

    int N = 8, k=4;
	int Arr[] = {3, 1, 2, 2, 1,4, 2, 3, 3};
			
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(i!=j&&Arr[i]==Arr[j]){
			{
				Arr[j] = Arr[j+1];
			}
				N--;
				j--;
          	}
		
		}
    }

			for(int i=0;i<N;i++)
				  {
					cout<<Arr[i]<<" ";
				  } 

}
