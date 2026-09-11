#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 20;
	int b = 10; 
	
	int gr = a > b; 
	printf("max : %d",gr);
	
	int min = a < b;
	printf("\nmin : %d",min);
	
	int x = 5;
	int y = 8;
	
	int com = x == y;
	printf("\nCom : %d",com);
	
	int data = x != y;
	printf("\ndata :%d",data);
	
	return 0;
}
