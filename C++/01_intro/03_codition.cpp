#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Enter your A : ";
	cin>>a;
	cout<<"Enter your B : ";
	cin>>b;
	cout<<"Enter your C : ";
	cin>>c;
	
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	cout<<"C : "<<c;
	
	if(a>b && a>c){
		cout<<"\nA is max : "<<a;
	}
	else if(b>c){
		cout<<"\nB is max : "<<b;
	}
	else{
		cout<<"\nC is max : "<<c;
	}
	
	return 0;
}
