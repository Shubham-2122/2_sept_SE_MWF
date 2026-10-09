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
			cin.ignore();
			cout<<"Enter your name : ";
			getline(cin,name);
			cout<<"Enter your course : ";
			getline(cin,course);
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
	
	s1.putData();
	s1.getData();

	
	return 0;
}
