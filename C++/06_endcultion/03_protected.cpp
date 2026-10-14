#include<iostream>
using namespace std;

class Student{
	protected:
		int rollno = 10;
	public:
		
};
class Test : public Student{
	public:
		void test(){
			cout<<"\n Test rollno : "<<rollno;
		}
};

int main()
{
	Test t;
	
	t.test();
		
	return 0;
}
