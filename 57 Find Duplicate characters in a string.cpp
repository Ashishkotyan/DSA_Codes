#include<iostream>
#include<string>
using namespace std;

void Repeat_count(string str)
{
	int len = str.length();
	int count =0;
	for(int i=0;i<len;i++)
	{
		count=0;
		for(int j=i+1;j<len;j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
			
		}if(count>0)
		{
			cout<<str[i]<<" "<<count<<endl;
		}
		
	}
	
}

int main()
{	
	string str = "geeksforgeeks";
	
	Repeat_count(str);
	
	
	
	
}
