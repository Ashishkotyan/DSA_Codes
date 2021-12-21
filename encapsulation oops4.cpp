#include<iostream>
using namespace std;


class a{

public: 
		int A;
		void funA(){
				cout<<"Function A\n";
		}	
	
private:		
		void funB(){
				cout<<"Function B\n";
		}
	
protected:	
		void funC(){
				cout<<"Function C\n";
		}
	
};
int main()
{
	a obj;
	obj.funA();
	obj.funB();
	obj.funC();
}



