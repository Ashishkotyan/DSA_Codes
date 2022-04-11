#include<iostream>
using namespace std;

int main()
{
	
	int N = 5;
int arr[]= {0, 2, 1, 2, 0};

for(int i=0;i<N;i++)
{
	cout<<arr[i]<<" ";
}
cout<<"After the sort"<<endl;

int Zero=0,One=0,Two=N-1;

for(int i=0;i<N;i++)
{
	if(arr[i]==0)
	{
		Zero++;
	}
	else if(arr[i]==1){
		One++;
	}
	else if(arr[i]==2)
	{
			Two++;
}
	
	
}
for(int i=0;i<Zero;i++)
{
	arr[i] =0;
}

for(int i=Zero;i<One;i++)
{
	arr[i] =1;
}
for(int i=One;i<N;i++)
{
	arr[i] =2;
}

for(int i=0;i<N;i++)
{
	cout<<arr[i]<<" ";
}




}


