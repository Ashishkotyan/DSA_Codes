#include<iostream>
#include<vector>

using namespace std;

int main()
{
//	allocate the memeory to vector 
	vector<int> a(5,1);
	for(int i:a)
	{
	
		cout<<i<<" ";

	}cout<<endl;

//copy the vector in 2 vector
	vector<int> last(a);
		for(int i:last){
		
		cout<<i<<" ";
	}cout<<endl;



	vector<int> v;
	cout<<"Size->"<<v.capacity()<<endl;
	
	v.push_back(1);
	cout<<"Size->"<<v.capacity()<<endl;
	v.push_back(2);
	cout<<"Size->"<<v.capacity()<<endl;
	v.push_back(3);
	cout<<"Size->"<<v.capacity()<<endl;
    v.push_back(4);
	cout<<"Size->"<<v.capacity()<<endl;	
	v.push_back(5);
	cout<<"Size->"<<v.size()<<endl;
	
	
	cout<<v.at(2)<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	
	cout<<"befor pop"<<endl;
	for(int i:v){
		
		cout<<i<<" ";
	}cout<<endl;
	
	v.pop_back();
	
	cout<<"after pop"<<endl;
	for(int i:v){
		
	cout<<i<<" ";
	}cout<<endl;
	
	cout<<"Size of vector befor clear-> "<<v.size()<<endl;
	v.clear();
	cout<<"after clear size-> "<<v.size()<<endl;
	
	
	
	
	
	
}
