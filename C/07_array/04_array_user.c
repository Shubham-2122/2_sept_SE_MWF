#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a[5];
	
	int i;
	
	for(i=0;i<5;i++){
		printf("Enter your Num : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	getch();
}
