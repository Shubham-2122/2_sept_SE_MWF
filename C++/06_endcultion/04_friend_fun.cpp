#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		void friend jay(Shubham);
};

void jay(Shubham s){
	cout<<"Jay your Money : "<<s.money;
}

int main()
{
	Shubham s1;
	jay(s1);
	return 0;
}
