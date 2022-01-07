#include<iostream>
using  namespace std;

int main()
{
	int n;
	int key;
	int  time;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"key";
	cin>>key;
	int timess=1,no=1;
	for(int i=0;i<n;i++){
		if(arr[i]==key)
		{
			time = i;
			timess = no;
			no++;
			
		}
			
	}
	
	cout<<time<<" "<<key<<" "<<timess;
	}
