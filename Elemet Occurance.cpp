#include <bits/stdc++.h>
using namespace std;

//time complex O(n)
static int first = -1;
static int last = -1;
void FindOccurance(string S, int i, char element)
{
	if(i == S.length())
	{
		cout<<first<<" "<<last;
		return;
	}
	char currChar = S.at(i);
	if(currChar == element)
	{
		if(first == -1)
		{
			first = i;	
		}	
		else{
			last = i;
		}
	}
	
	FindOccurance(S, i+1,element);	
}

int main()
{
	string s = "abaacdaefaah";
	
	FindOccurance(s,0,'a');
	
}
