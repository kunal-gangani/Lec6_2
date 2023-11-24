#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	int i=1;
	clrscr();
	printf("Enter a Number: ");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}while(i<=n);
	getch();
}