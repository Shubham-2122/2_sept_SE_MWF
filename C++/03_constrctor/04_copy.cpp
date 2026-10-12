#include<iostream>
#include<cstring>
using namespace std;

class Student{
	private:
		int rollno;
		char name[20];
	public:
//		1) default constru
		Student(){
			cout<<"Enter your Rollno : ";
			cin>>rollno;
			cout<<"Enter your Name : ";
			cin>>name;
		}
//		2) parameter
		Student(int r,const char s[20]){
			rollno = r;
			strcpy(name,s);
		}
		
//		3) copy constru 
		Student(Student &sh){
			rollno = sh.rollno;
			strcpy(name,sh.name);
		}

		void display(){
			cout<<"Student details "<<endl;
			cout<<"Rollno : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{
	
//	1) deafulat
	Student plak;
	plak.display();
	
//	2) paramter

	Student meet(7,"meet");
	meet.display();
		
//	3) copy 
	Student s3(meet);
	s3.display();
	
	
	return 0;
}
