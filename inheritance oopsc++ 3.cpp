#include<iostream>
#include<string>

using namespace std;

class laptopsystem {
	public:
		laptopsystem(){
			cout<<"Base Class One 1\n";
		}
};


class laptop {
	public:
		laptop(){
			cout<<"Base class 2\n";
		}
		string name;
		float price;
		
};
	
	class gamingl : public laptop , public laptopsystem
	{
		public:
			gamingl(){
				cout<<"Derived Class called\n";
				
			}
		string name;
		int vram;
	
	
};

int main()
{
	gamingl l1;
}

