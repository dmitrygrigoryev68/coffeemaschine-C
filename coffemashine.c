 /*
 * coffemashine.c
 *
 *  Created on: Apr 20, 2018
 *      Author: Dmitry Grigoryev
 */

#include<stdio.h>

void coffemachine(int choice);
void espresso();
void americano();
void cappucino();
void latte();
void macciato();
void cashDesk(float price);
void composition();
////////////////////////////////////////////////////////////////////
int main(){
	printf("\n                       !!!KOFFEE VON DMITRY!!!\n\n");
	printf(" Your choice     Price\n\n");
	printf("Espresso  - 1   1.00 EUR\n");
	printf("Americano - 2   1.50 EUR\n");
	printf("Cappucino - 3   2.25 EUR\n");
	printf("Latte     - 4   2.45 EUR\n");
	printf("Macciato -  5   3.05 EUR\n\n");
	int choice = 0;
	printf("Make your choice, please!\n");
	fflush(stdout);
	scanf("%d",&choice);
	coffemachine(choice);
    return 0;
}
/////////////////////////////////////////////////////////////////////
void coffemachine(int choise){
	switch (choise){
         case 1:
	     espresso();
	     break;
	     case 2:
	     americano();
	     break;
	     case 3:
	     cappucino();
         break;
	     case 4:
	     latte();
	     break;
	     case 5:
	     macciato();
	     break;
	     default:
	     printf("!!!WRONG PARAMETER!!!\n");
	     main();
	}
}
////////////////////////////////////////////////////////////////////
void espresso(){
	float price=1;
	cashDesk(price);
	composition(35,0,35);
	printf("\nYour Espresso is ready!\n\n");
	return;
}
void americano(){
	float price=1.5;
	cashDesk(price);
	composition(100,0,35);
	printf("\nYour Americano is ready!\n\n");
	return;
}
void cappucino(){
	float price=2.25;
	cashDesk(price);
	composition(150,50,15);
	printf("\nYour Cappucino is ready!\n\n");
	return;
}
void latte(){
	float price=2.45;
	cashDesk(price);
	composition(80,45,20);
	printf("\nYour Latte is ready!\n\n");
	return;
}
void macciato(){
	float price=3.05;
	cashDesk(price);
	composition(92,38,25);
	printf("\nYour Macciato is ready!\n\n");
	return;
}
///////////////////////////////////////////////////////////////////////////
void composition(int mlWater,int mlMilk, int mgCoffee){
		printf("adding %d ml of water\n",mlWater);
		printf("adding %d ml of milk\n",mlMilk);
		printf("adding %d ml of coffee\n",mgCoffee);
		return;
}
///////////////////////////////////////////////////////////////////////////
void cashDesk(float price){
    float sum=0;
    float not=0;
    printf("Insert coins oder notes\n");

    do{
    	   fflush(stdout);
           scanf("%f",&not);
           sum+=not;
           if (sum>=price) break;
           printf("      %.2f  EUR\n",(sum-price));
	   }
    while(sum<price);

    printf("You payed %.2f  EUR\n\n",sum);
    if (sum>price) printf("Don't forget a change please!  %.2f  EUR\n\n",(sum-price));
    return;
}
