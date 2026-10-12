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

int main()
{
	B test;
	test.a();
	test.b();
	
	return 0;
}
