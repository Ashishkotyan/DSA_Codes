
#include <bits/stdc++.h>
#include<string>
using namespace std;

 string countAndSay(int n) {
        string str = "11";
        if(n==1)
           return "1";
        if(n==2)
            return "11";
        for(int i=3;i<=n;i++){
            int count = 1; 													
            str = str+'&'; //to check till last character      
            string newstr="";
            for(int j=1;j<str.size();j++){
                if(str[j]!=str[j-1]){                                 			//1 0, 2 1, 3 2, 4 3, 
                    newstr += to_string(count);  //store count of character 2 =  2    1    1    1  1   
                    newstr += str[j-1];
					   //store character                      21  
					cout<<str<<" == "<<str[j]<<" + "<<str[j-1]<<" = "<<newstr<<" \n";   
                    count = 1;  //reset counter
                }
                else
                {
                    count++;  //increment counter
                }
            }
            str=newstr;  
        }
        return str;
            
	
}

// Driver program
int main()
{
	int N = 4;
	cout << countAndSay(N) << endl;
	return 0;
}

