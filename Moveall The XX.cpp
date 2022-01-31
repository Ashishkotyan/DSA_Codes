#include <bits/stdc++.h>
using namespace std;

//TC O(n + count) count ==n;  O(n+n) = O (2n) = O(n)
//O(n) final TC

void MoveALLx(string str,int i , int count, string newString)
{
	if(i == str.length())
	{
		for(int i=0;i<count;i++)
		{
			newString+='x';
		}
		
		cout<<newString;
		return;
	}
	
	char currChar = str.at(i);
	if(currChar=='x')
	{
		count++;
		MoveALLx(str,i+1,count,newString);
	}
	else{
		newString +=currChar;    
		MoveALLx(str,i+1,count,newString);
	}
		
	
}



int main()
{
	string Str = "axbcxxd";
	cout<<Str<<endl;
	MoveALLx(Str,0,0,"");
		
}
