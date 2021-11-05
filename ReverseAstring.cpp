#include <bits/stdc++.h>
using namespace std;


void Stings_re(string S, int i)
{
	if(i==0)
	{
		cout<<S.at(i);
		return;
	}
	cout<<S.at(i);
	Stings_re(S,i-1);
	
}

int main()
{
	string s = "Ashish Kotyan";
	Stings_re(s,s.length()-1);
	
}
