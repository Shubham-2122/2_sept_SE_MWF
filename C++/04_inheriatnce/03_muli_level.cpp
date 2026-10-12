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

class C : public B{
	public:
		void c(){
			cout<<"\nC class Function";
		}
};

int main()
{
	C test;
	test.b();
	test.c();
	test.a();
	
	return 0;
} 
