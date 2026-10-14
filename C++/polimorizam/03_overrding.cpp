#include<iostream>
using namespace std;

class Prenet {
	public:
		void display(){
			cout<<"\n A class";
		}
};

class Child : public Prenet{
	public:
		void display(){
			cout<<"\n b class";
		}
};

int main()
{
	Child demo;
	demo.display();

//	prenet :: scope resolution
	demo.Prenet::display();
	
	return 0;
}
