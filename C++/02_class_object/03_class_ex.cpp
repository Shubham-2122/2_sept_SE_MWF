#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		string name;
		string course;
	
	public:
		void putData(){
			cout<<"Enter your rollno : ";
			cin>>rollno;
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"Enter your course : ";
			cin>>course;
		}
		void getData(){
			cout<<"---student details ----"<<endl;
			cout<<"rollno : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"course : "<<course<<endl;
		}
};

int main()
{
	Student s1;
	Student meet;
	
	s1.putData();
	s1.getData();
	
	meet.putData();
	meet.getData();
	
	return 0;
}
