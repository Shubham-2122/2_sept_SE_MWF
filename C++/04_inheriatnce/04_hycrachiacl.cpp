#include<iostream>
using namespace std;

class A {
	public :
		void a(){
			cout<<"\nA class function";
		}
};

class B : public A{
	public:
		void b(){
			cout<<"\nB class Function";
		}
};

class C : public A{
	public:
		void c(){
			cout<<"\nC class Function";
		}
};

int main()
{
	C test;
	test.c();
	test.a();
	
	B demo;
	demo.a();
	demo.b();
	
	return 0;
}  
