#include<stdio.h>
#include<conio.h>
void main(){
	int choice,pizza,burger,beverage;
	clrscr();
	do{
		printf("Press 1 for Pizza\n");
		printf("Press 2 for Burger\n");
		printf("Press 3 for Beverage\n");
		printf("Enter your Choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Press 1 for Margherita\n");
				printf("Press 2 for Burn To Hell\n");
				printf("Enter your Choice: ");
				scanf("%d",&pizza);
				switch(pizza){
					case 1:
						printf("Your Margherita is Getting Ready..\n");
						break;
					case 2:
						printf("Your Burn To Hell is Getting Ready..\n");
						break;
					default:
						printf("Invalid Choice..\n");
						break;
				}
				break;
			case 2:
				printf("Press 1 for Maharaja Mac\n");
				printf("Press 2 for Paneer Tikka\n");
				printf("Enter Your Choice: ");
				scanf("%d",&burger);
				switch(burger){
					case 1:
						printf("Your Maharaja Mac is Getting Ready..\n");
						break;
					case 2:
						printf("Your Paneer Tikka is Getting Ready..\n");
						break;
					default:
						printf("Invalid Choice..\n");
						break;
				}
				break;
			case 3:
				printf("Press 1 for Apple Berry Mojito\n");
				printf("Press 2 for Ginger Ale\n");
				printf("Enter Your Choice: ");
				scanf("%d",&beverage);
				switch(beverage){
					case 1:
						printf("Your Apple Berry Mojito is Getting Ready..\n");
						break;
					case 2:
						printf("Your Ginger Ale is Getting Ready..");
						break;
					default:
						printf("Invalid Choice..\n");
						break;
				}
				break;
		}
	}while(choice!=0);
	getch();
}