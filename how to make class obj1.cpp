#include<iostream>
#include<string>

using namespace std;



class student{
	public:
		
			string naame;
			int roll;
			int classs;
			int id;  
			 
			void getdata(){
				cin>>naame;
				cin>>roll;
				cin>>classs;
				cin>>id;
			}
			
			void showdata(){
				
				cout<<naame<<" "<<roll<<" "<<classs<<" "<<id;
			}
						
		
	};
	
	
int main()
{
	student stud;
	stud.getdata();
	stud.showdata();
	
	
	
	
	
	
	
}
