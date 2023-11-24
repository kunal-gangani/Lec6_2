#include<stdio.h>
#include<conio.h>
void main(){
    int n,i=2;
    clrscr();
    printf("Enter a Value: ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        n+=2;
    }while(i<=n);
    getch();
}