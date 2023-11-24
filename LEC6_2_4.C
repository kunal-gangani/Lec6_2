#include<stdio.h>
#include<conio.h>
void main(){
    int n,f1=0,f2=1,i=0,next;
    clrscr();
    printf("Enter the Ending Number: ");
    scanf("%d",&n);
    while(i<n){
	printf("%d\n",f1);
        next=f1+f2;
        f1=f2;
        f2=next;
        i++;
    }
    getch();
}