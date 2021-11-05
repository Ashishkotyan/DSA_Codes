#include<iostream>
#include<string>

using namespace std;

void Substr(string t,int i,int n,string s)
{
	if(i==n)
	{
			cout<<t<<endl;
	}
	else
	{
	 		Substr(t,i+1,n,s);
	 		cout<<"1";
	 		t=t+s[i];
	 		Substr(t,i+1,n,s);
	}
}


int main()
{
	string s = "abc";
	
	Substr("",0,s.length(),s);
}

