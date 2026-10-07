#include<iostream>
using namespace std;

int main()
{
	
//	char name1[20] = "shubham jadav";
//	string surname = "hello";
	
//	cout<<name1;
//	cout<<"\n"<<surname;
		
	string name;
	
	cout<<"Enter your Name : ";
//	cin>>name;
	getline(cin,name);
	cout<<"Name : "<<name;
	
	return 0;
}
