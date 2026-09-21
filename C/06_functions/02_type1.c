/*
	1) without paramter and without return
	
	void fun(){
		
	}
*/

#include<stdio.h>
#include<conio.h>

void demo(){
	printf("\nHello demo\n");
}

void test(){
	int i;
	for(i=1;i<=30;i++){
		printf("*");
	}
}

void main(){
	
	test();
	demo();
	test();
	demo();
	test();
	printf("\nShubham jadav\n");
	test();
	getch();
}

