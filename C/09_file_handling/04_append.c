#include<stdio.h>
#include<conio.h>

int main(){
	
	FILE *file = fopen("demo.txt","a");
	char str[100];
	
//	file 
	if(file == NULL){
		printf("Erroring Opeing fie\n");
		return 1;
	}
	
	fputs("\nhello this front-end developer also content creator",file);
	
	fclose(file);
	
	printf("Data succesuu printed");
	
	
	return 0;
}
