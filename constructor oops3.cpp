#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		
		string name;		
		int roll;
		
		student(){
		
		cout<<"garbage constr self call"<<name<<roll<<endl;
	}
		student(string lname, int sroll ){
			
			name = lname;
			roll = sroll;
			cout<<"value constructor "<<name<<" "<<roll<<endl;
		}
		student(const student &p)
		{
			name = p.name;
			roll = p.roll+100;
			cout<<"Copy constructor "<<name<<" "<<roll<<endl;
		}
		~student()
		{
			cout<<"Distructing "<<roll<<endl;
		}
		
};

int main()
{
	student s;
	student m("asshu",100);	
	student n("ashish",50);
	student k = m;
//	st n("ashu", 9147903);
	
//	st.info();
	
	
}
