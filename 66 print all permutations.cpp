#include <bits/stdc++.h>
#include<string>

using namespace std;

//int main()
//{
//	string s="abc";
//	
//	sort(s.begin(),s.end());
//	cout<<s<<" "<<endl;
//	while(next_permutation(s.begin(),s.end()))
//	{cout<<s<<" "<<endl;
//	}
//	
//}

void permute(string a, int l, int r)
{
	// Base case
	if (l == r)
		cout<<a<<endl;
	else
	{
		// Permutations made
		
		for (int i = l; i <= r; i++)
		{	
			cout<<a[i]<<" "<<a[l]<<" "<<i<<" Swap\n";
			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);
//			cout<<"Reverse\n";
			//backtrack
			swap(a[l], a[i]);
		}
	}
}

// Driver Code
int main()
{
	string str = "ABCD";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}
