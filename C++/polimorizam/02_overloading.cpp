#include<iostream>
using namespace std;

class Load {
	public:
		void display(int a){
			cout<<"a : "<<a;
		}
		void display(int a,int b){
			cout<<"sum : "<<a+b;
		}
};

int main()
{
	Load ab;
	ab.display(20);
	ab.display(30,20);
	
	return 0;
}
