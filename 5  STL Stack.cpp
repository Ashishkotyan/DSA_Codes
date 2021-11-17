//stack, Queue, priority Queue   Container Adaptors

#include<iostream>

#include<stack>

using namespace std;
int main()
{
	stack<string> s;
	
	s.push("ashu");
	s.push("kotyan");
	s.push("kumar");
	
	cout<<s.top()<<endl;
	
	cout<<s.size()<<endl;
	
	cout<<s.empty()<<endl;
	
	s.pop();
	cout<<s.top()<<endl;
}
