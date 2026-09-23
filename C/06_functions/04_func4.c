//3) with paramerter and with return

#include<stdio.h>
#include<conio.h>

int add(int a,int b){
	int sum = a+b;
	return sum;	
}

void main()
{
	
	printf("Addition : %d",add(50,20));
	printf("\nadd : %d",add(40,60));
	
	getch();
}
