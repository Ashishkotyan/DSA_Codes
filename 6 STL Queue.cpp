#include<iostream>

#include<queue>
using namespace std;

int main()
{
	
	queue<string> q;
	q.push("ashu");
	q.push("kotyan");
	q.push("kumar");
	
	cout<<q.front()<<endl;
	
	q.pop();
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;
	cout<<q.size()<<endl;
	
}
