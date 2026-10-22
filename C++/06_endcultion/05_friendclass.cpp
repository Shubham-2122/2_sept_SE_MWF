#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		friend class Abhinav;
		
};
class Abhinav : public Shubham{
	public :
		void demo(Shubham s){
			cout<<"Abhinav money : "<<s.money;
		}
};

int main()
{
	Abhinav a;
	Shubham s1;
		
	a.demo(s1);
	
	return 0;
	
}
