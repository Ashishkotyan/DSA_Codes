#include <bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
	string s1="xyz", s2="123";
	string res = "12xy3z";
	
	int l1 = s1.length();
	int l2 = s2.length();
	int lr = res.length();
	if((l1+l2) != lr) cout<<"No";
	else{
		int f=0;
		int i=0,j=0,k=0;
		while(k<lr)
		{
			if(i<l1 && s1[i]==res[k]) i++;
			else if(j<l2 && s2[j]==res[k])j++;
			else{
				f=1;
				break;
			}
			k++;
		}
		if(i<l2) cout<<"No";
		else{
			cout<<"YES";
		}
	}
	
 } 
