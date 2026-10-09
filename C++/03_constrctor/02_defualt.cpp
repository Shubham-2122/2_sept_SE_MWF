#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		char name[20];
	public:
		Student(){
			cout<<"Enter your Rollno : ";
			cin>>rollno;
			cout<<"Enter your Name : ";
			cin>>name;
		}
		void display(){
			cout<<"Student details "<<endl;
			cout<<"Rollno : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{
	
	Student plak;
	plak.display();
	
	Student meet;
	meet.display();
	return 0;
}
