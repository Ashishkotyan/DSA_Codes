#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
	string s = "aaaabbaa";

	
	int len = s.length();
	
	int low,high;
	int start=0,end=1;
	
	for(int i=1;i<len;i++)
	{
		// even susbtring
		
		low=i-1;
		high=i;
		
		while(low>=0 && high<len && s[i]==s[high])
		{
			
			if(high-low+1>end)
			{
				start=low;
				end=high+1;
			}
			low--;
			high++;
			} 	
		
	}	

	for(int i=start;i<start+end-1;i++)
	{
		cout<<s[i];
	}
}

