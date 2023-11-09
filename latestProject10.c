#include<stdio.h>
#include <windows.h>
#define max 100

int inputValid(int ,int ,int ,int);

int nextCus;
int orderNumber=0, orderParatha=0, orderCrispy=0, orderLocal=0,orderTreasure=0,orderNutella=0;
int chickenCheese[max] ,blackBeef[max],pizzaBeef[max],bbqChicken[max],chickenFloss[max],doubleOnion[max],crunchyPeanut[max],bananaPeanut[max];
int chickenCheese1[max] ,blackBeef1[max],pizzaBeef1[max],bbqChicken1[max],chickenFloss1[max],doubleOnion1[max],crunchyPeanut1[max],bananaPeanut1[max];
int chapattiSausage[max],chapattiRendang[max];
int cheezyChicken[max], cheezyBeef[max], cheezyJumbo[max];
int nuttyNutella[max],cheeseNutella[max];
int cheeseSlice[max],chickenSlice[max],beefPepper[max],bananaSlice[max],chocChips[max],nutellaAdd[max];
int homeSoy[max], orangeJuice[max], iceLemon[max], miloDrink[max], mineralWater[max], cansDrink[max], hotDrink[max];
int cheeseSliceCat1[max],cheeseSliceCat2[max],cheeseSliceCat3[max],cheeseSliceCat4[max],cheeseSliceCat5[max],chickenSliceCat1[max],chickenSliceCat2[max],chickenSliceCat3[max],chickenSliceCat4[max],chickenSliceCat5[max],beefPepperCat1[max],beefPepperCat2[max],beefPepperCat3[max],beefPepperCat4[max],beefPepperCat5[max];
int bananaSliceCat1[max],bananaSliceCat2[max],bananaSliceCat3[max],bananaSliceCat4[max],bananaSliceCat5[max],chocChipscat1[max],chocChipscat2[max],chocChipscat3[max],chocChipscat4[max],chocChipscat5[max],nutellaAdd1[max],nutellaAdd2[max],nutellaAdd3[max],nutellaAdd4[max],nutellaAdd5[max];
float totalParatha = 0, totalCrispy = 0, totalLocal = 0, totalTreasure = 0, totalNutella = 0, totalAddon = 0, totalbeve = 0;
float totalPrice = 0;
float payAmount, totalBalance,taxAmount,serviceCharge;
	int parathaQuantity [8] = {0,0,0,0,0,0,0,0};
	int crispyQuantity [8] = {0,0,0,0,0,0,0,0};
	int localQuantity [2] = {0,0};
	int treasureQuantity [3] = {0,0,0};
	int nutellaQuantity [2] = {0,0};
	int addQuantity [6] = {0,0,0,0,0,0};
	int beveQuantity [7] = {0,0,0,0,0,0,0};
    
int main()
{
	int foodChoice,parathaChoice,crispyChoice,localChoice,treasureChoice,nutellaChoice,addChoice,beveChoice,orderChoice,checking1;
	int addOns,moreOrder;
	totalPrice=0,totalParatha=0,totalCrispy=0,totalLocal=0,totalTreasure=0,totalNutella=0,totalAddon=0,totalbeve=0,orderNumber=0;
do{     
	do{
		system("cls");
		printf("Welcome to Hot and Roll!");
	  	printf("\n------------------\n");
		printf("| Menu code      |\n");
		printf("------------------\n");
		printf("| 1. Food        |\n");
		printf("| 2. Beverage    |\n");
		printf("------------------");

    	do{
        	printf("\nEnter menu code : ");
        	checking1=scanf("%d",&orderChoice);
        	fflush(stdin);
    	}while (inputValid(checking1,orderChoice,1,2)!=1);

	if(orderChoice ==1){
			printf("\n---------------------------------\n");
			printf("| Subcategory code              |\n");
			printf("---------------------------------\n");
			printf("| 1. Paratha Wrap               |\n");
			printf("| 2. Crispy Wrap                |\n");
			printf("| 3. Special Local Taste        |\n");
			printf("| 4. Whole Meal Treasure        |\n");
			printf("| 5. Crispy Nutella             |\n");
			printf("---------------------------------\n");
		do{	
			printf("\nEnter subcategory code :");
			checking1=scanf("%d",&foodChoice);
			fflush(stdin);
		}while(inputValid(checking1,foodChoice,1,5)!=1);

	if(foodChoice == 1){
		orderParatha+=1;
	printf("\n---------------------------------------------------------------------------------");
	printf("\n| Category\t\t| Item code\t\t\t| Price (RM)\t\t|");
	printf("\n---------------------------------------------------------------------------------");
	//paratha wrap
	printf("\n| Paratha Wrap\t\t| 1.Chicken & Cheese\t\t|    4.80\t\t|");
	printf("\n| \t\t\t| 2.Black Pepper Beef\t\t|        \t\t|");
	printf("\n| \t\t\t| 3.Pizza Beef\t\t\t|        \t\t|");
	printf("\n| \t\t\t| 4.BBQ Chicken\t\t\t|        \t\t|");
	printf("\n| \t\t\t| 5.Chicken Floss\t\t|        \t\t|");
	printf("\n| \t\t\t| 6.Double Cheese Onion\t\t|        \t\t|");
	printf("\n| \t\t\t| 7.Crunchy Peanut\t\t|        \t\t|");
	printf("\n| \t\t\t| 8.Banana Peanut\t\t|        \t\t|");
	printf("\n---------------------------------------------------------------------------------");
	
		do{
			printf("\nEnter Paratha Wrap code :");
			checking1=scanf("%d",&parathaChoice);
			fflush(stdin);
		}while(inputValid(checking1,parathaChoice,1,8)!=1);	
	totalParatha+=4.80;
	parathaQuantity[parathaChoice-1]++;
	
		if(parathaChoice==1)
			chickenCheese[orderParatha]+=1;
		else if(parathaChoice==2)
			blackBeef[orderParatha]+=1;
		else if(parathaChoice==3)
			pizzaBeef[orderParatha]+=1;
		else if(parathaChoice==4)
			bbqChicken[orderParatha]+=1;
		else if(parathaChoice==5)
			chickenFloss[orderParatha]+=1;
		else if(parathaChoice==6)
			doubleOnion[orderParatha]+=1;
		else if(parathaChoice==7)
			crunchyPeanut[orderParatha]+=1;
		else if(parathaChoice==8)
			bananaPeanut[orderParatha]+=1;
		do{
			printf("\nAdd topping? 1-Yes, 2-No :");
			checking1=scanf("%d",&addOns);
			fflush(stdin);
		}while(inputValid(checking1,addOns,1,2)!=1);

		system("cls");
		if(addOns ==1){
	printf("\n---------------------------------------------------------------------------------");
	printf("\n| Topping\t\t| Item code\t\t\t| Price (RM)\t\t|");
	printf("\n---------------------------------------------------------------------------------");
	//add ons topping
	printf("\n| Add ons Topping\t| 1.Cheese\t\t\t|    1.00\t\t|");
	printf("\n| \t\t\t| 2.Chicken Slice\t\t|        \t\t|");
	printf("\n| \t\t\t| 3.Beef Pepperoni\t\t|        \t\t|");
	printf("\n| \t\t\t| 4.Banana\t\t\t|        \t\t|");
	printf("\n| \t\t\t| 5.Chocolate Chips\t\t|        \t\t|");
	printf("\n| \t\t\t| 6.Nutella\t\t\t|        \t\t|");
	printf("\n---------------------------------------------------------------------------------");
		
		do{
			do{
				printf("\nEnter item code :");
				checking1=scanf("%d",&addChoice);
				fflush(stdin);
			}while(inputValid(checking1,addChoice,1,6)!=1);
		totalAddon+=1.00;
		addQuantity[addChoice-1]++;
		
			if(addChoice==1)
				cheeseSliceCat1[orderParatha]+=1;
			else if(addChoice==2)
				chickenSliceCat1[orderParatha]+=1;
			else if(addChoice==3)
				beefPepperCat1[orderParatha]+=1;
			else if(addChoice==4)
				bananaSliceCat1[orderParatha]+=1;
			else if(addChoice==5)
				chocChipscat1[orderParatha]+=1;
			else if(addChoice==6)
				nutellaAdd1[orderParatha]+=1;
				
		do{
			printf("\nAdd more topping? 1-yes, 2-no :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,2)!=1);
		}while(addChoice==1);
		}
	
		
   }else if (foodChoice == 2){
		orderCrispy+=1;
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Category\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//crispy wrap
			printf("\n| Crispy Wrap\t\t| 1.Chicken & Cheese\t\t|    6.80\t\t|");
			printf("\n| \t\t\t| 2.Black Pepper Beef\t\t|        \t\t|");
			printf("\n| \t\t\t| 3.Pizza Beef\t\t\t|        \t\t|");
			printf("\n| \t\t\t| 4.BBQ Chicken\t\t\t|        \t\t|");
			printf("\n| \t\t\t| 5.Chicken Floss\t\t|        \t\t|");
			printf("\n| \t\t\t| 6.Double Cheese Onion\t\t|        \t\t|");
			printf("\n| \t\t\t| 7.Crunchy Peanut\t\t|        \t\t|");
			printf("\n| \t\t\t| 8.Banana Peanut\t\t|        \t\t|");
			printf("\n---------------------------------------------------------------------------------");
	do{
		printf("\nEnter Crispy Wrap code :");
		checking1=scanf("%d",&crispyChoice);
		fflush(stdin);
	}while(inputValid(checking1,crispyChoice,1,8)!=1);
	totalCrispy+=6.80;
	crispyQuantity[crispyChoice-1]++;
		if(crispyChoice==1)
			chickenCheese1[orderCrispy]+=1;
		else if(crispyChoice==2)
			blackBeef1[orderCrispy]+=1;
		else if(crispyChoice==3)
			pizzaBeef1[orderCrispy]+=1;
		else if(crispyChoice==4)
			bbqChicken1[orderCrispy]+=1;
		else if(crispyChoice==5)
			chickenFloss1[orderCrispy]+=1;
		else if(crispyChoice==6)
			doubleOnion1[orderCrispy]+=1;
		else if(crispyChoice==7)
			crunchyPeanut1[orderCrispy]+=1;
		else if(crispyChoice==8)
			bananaPeanut1[orderCrispy]+=1;
	do{
		printf("\nAdd topping? 1-yes, 2-no :");
		checking1=scanf("%d",&addOns);
		fflush(stdin);
	}while(inputValid(checking1,addOns,1,2)!=1);

	system("cls");
	if(addOns ==1){
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Topping\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//add ons topping
			printf("\n| Add ons Topping\t| 1.Cheese\t\t\t|    1.00\t\t|");
			printf("\n| \t\t\t| 2.Chicken Slice\t\t|        \t\t|");
			printf("\n| \t\t\t| 3.Beef Pepperoni\t\t|        \t\t|");
			printf("\n| \t\t\t| 4.Banana\t\t\t|        \t\t|");
			printf("\n| \t\t\t| 5.Chocolate Chips\t\t|        \t\t|");
			printf("\n| \t\t\t| 6.Nutella\t\t\t|        \t\t|");
			printf("\n---------------------------------------------------------------------------------");
        
	do{
		do{
			printf("\nEnter item code :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,6)!=1);
		totalAddon+=1.00;
		addQuantity[addChoice-1]++;
			if(addChoice==1)
				cheeseSliceCat2[orderCrispy]+=1;
			else if(addChoice==2)
				chickenSliceCat2[orderCrispy]+=1;
			else if(addChoice==3)
				beefPepperCat2[orderCrispy]+=1;
			else if(addChoice==4)
				bananaSliceCat2[orderCrispy]+=1;
			else if(addChoice==5)
				chocChipscat2[orderCrispy]+=1;
			else if(addChoice==6)
				nutellaAdd2[orderCrispy]+=1;
				
		do{
			printf("\nAdd more topping? 1-yes, 2-no :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,2)!=1);
	}while(addChoice==1);
	}

	}else if(foodChoice == 3){
		orderLocal+=1;
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Category\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//special local taste
			printf("\n| Special Local Taste\t| 1.Chapatti Chicken Sausage\t|    4.50\t\t|");
			printf("\n| \t\t\t| 2.Chapatti Chicken Rendang\t|        \t\t|");
			printf("\n---------------------------------------------------------------------------------");
	do{
		printf("\nEnter Special Local Taste code :");
		checking1=scanf("%d",&localChoice);
		fflush(stdin);
	}while(inputValid(checking1,localChoice,1,2)!=1);
	totalLocal+=4.50;
	localQuantity[localChoice-1]++;
		if(localChoice==1)
			chapattiSausage[orderLocal]+=1;
		else if(localChoice==2)
			chapattiRendang[orderLocal]+=1;
		do{
			printf("\nAdd topping? 1-Yes, 2-No :");
			checking1=scanf("%d",&addOns);
			fflush(stdin);
		}while(inputValid(checking1,addOns,1,2)!=1);

	system("cls");
	if(addOns ==1){
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Topping\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//add ons topping
			printf("\n| Add ons Topping\t| 1.Cheese\t\t\t|    1.00\t\t|");
			printf("\n| \t\t\t| 2.Chicken Slice\t\t|        \t\t|");
			printf("\n| \t\t\t| 3.Beef Pepperoni\t\t|        \t\t|");
			printf("\n| \t\t\t| 4.Banana\t\t\t|        \t\t|");
			printf("\n| \t\t\t| 5.Chocolate Chips\t\t|        \t\t|");
			printf("\n| \t\t\t| 6.Nutella\t\t\t|        \t\t|");
			printf("\n---------------------------------------------------------------------------------");
		
	do{
		do{
			printf("\nEnter item code :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,6)!=1);
		totalAddon+=1.00;
		addQuantity[addChoice-1]++;
			if(addChoice==1)
				cheeseSliceCat5[orderLocal]+=1;
			else if(addChoice==2)
				chickenSliceCat5[orderLocal]+=1;
			else if(addChoice==3)
				beefPepperCat5[orderLocal]+=1;
			else if(addChoice==4)
				bananaSliceCat5[orderLocal]+=1;
			else if(addChoice==5)
				chocChipscat5[orderLocal]+=1;
			else if(addChoice==6)
				nutellaAdd5[orderLocal]+=1;
				
		do{
			printf("\nAdd more topping? 1-yes, 2-no :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,2)!=1);
	}while(addChoice==1);
	}

	}else if(foodChoice == 4){
		orderTreasure+=1;
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Category\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//wholemeal treasure
			printf("\n| Whole Meal treasure\t| 1.Cheezy Chicken\t\t|    7.90\t\t|");
			printf("\n| \t\t\t| 2.Cheezy Beef\t\t\t|    \t\t\t|");
			printf("\n| \t\t\t| 3.Cheezy Jumbo\t\t|    \t\t\t|");
			printf("\n---------------------------------------------------------------------------------");
	do{
		printf("\nEnter Wholemeal Treasure Meal code :");
		checking1=scanf("%d",&treasureChoice);
		fflush(stdin);
	}while(inputValid(checking1,treasureChoice,1,3)!=1);
	totalTreasure+=7.90;
	treasureQuantity[treasureChoice-1]++;
		if(treasureChoice==1)
			cheezyChicken[orderTreasure]+=1;
		else if(treasureChoice==2)
			cheezyBeef[orderTreasure]+=1;
		else if(treasureChoice==3)
			cheezyJumbo[orderTreasure]+=1;
		do{
			printf("\nAdd topping? 1-Yes, 2-No :");
			checking1=scanf("%d",&addOns);
			fflush(stdin);
		}while(inputValid(checking1,addOns,1,2)!=1);

	system("cls");
	if(addOns ==1){
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Topping\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//add ons topping
			printf("\n| Add ons Topping\t| 1.Cheese\t\t\t|    1.00\t\t|");
			printf("\n| \t\t\t| 2.Chicken Slice\t\t|        \t\t|");
			printf("\n| \t\t\t| 3.Beef Pepperoni\t\t|        \t\t|");
			printf("\n| \t\t\t| 4.Banana\t\t\t|        \t\t|");
			printf("\n| \t\t\t| 5.Chocolate Chips\t\t|        \t\t|");
			printf("\n| \t\t\t| 6.Nutella\t\t\t|        \t\t|");
			printf("\n---------------------------------------------------------------------------------");
		
	do{
		do{
			printf("\nEnter item code :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,6)!=1);
			totalAddon+=1.00;
			addQuantity[addChoice-1]++;
			if(addChoice==1)
				cheeseSliceCat3[orderTreasure]+=1;
			else if(addChoice==2)
				chickenSliceCat3[orderTreasure]+=1;
			else if(addChoice==3)
				beefPepper[orderTreasure]+=1;
			else if(addChoice==4)
				bananaSliceCat3[orderTreasure]+=1;
			else if(addChoice==5)
				chocChipscat3[orderTreasure]+=1;
			else if(addChoice==6)
				nutellaAdd3[orderTreasure]+=1;

		do{
			printf("\nAdd more topping? 1-yes, 2-no :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,2)!=1);
	}while(addChoice==1);
	}

	}else if(foodChoice == 5){
		orderNutella+=1;
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Category\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//crispy nutella
			printf("\n| Crispy Nutella\t| 1.Nutty Nutella\t\t|    8.00\t\t|");
			printf("\n| \t\t\t| 2.Cheese Nutella\t\t|    9.90\t\t|");
			printf("\n---------------------------------------------------------------------------------");
	do{
		printf("\nEnter Nutella crispy code :");
		checking1=scanf("%d",&nutellaChoice);
		fflush(stdin);
	}while(inputValid(checking1,nutellaChoice,1,2)!=1);
	if(nutellaChoice==1){
		totalNutella+=8.00;
	}else if (nutellaChoice==2){
		totalNutella+=9.90;
	}
	nutellaQuantity[nutellaChoice-1]++;
		if(nutellaChoice==1)
			nuttyNutella[orderNutella]+=1;
		else if(nutellaChoice==2)
			cheeseNutella[orderNutella]+=1;
		do{
			printf("\nAdd topping? 1-Yes, 2-No :");
			checking1=scanf("%d",&addOns);
			fflush(stdin);
		}while(inputValid(checking1,addOns,1,2)!=1);

	system("cls");
	if(addOns ==1){
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Topping\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//add ons topping
			printf("\n| Add ons Topping\t| 1.Cheese\t\t\t|    1.00\t\t|");
			printf("\n| \t\t\t| 2.Chicken Slice\t\t|        \t\t|");
			printf("\n| \t\t\t| 3.Beef Pepperoni\t\t|        \t\t|");
			printf("\n| \t\t\t| 4.Banana\t\t\t|        \t\t|");
			printf("\n| \t\t\t| 5.Chocolate Chips\t\t|        \t\t|");
			printf("\n| \t\t\t| 6.Nutella\t\t\t|        \t\t|");
			printf("\n---------------------------------------------------------------------------------");
		
	do{
		do{
			printf("\nEnter item code :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,6)!=1);
		totalAddon+=1.00;
		addQuantity[addChoice-1]++;
			if(addChoice==1)
				cheeseSliceCat4[orderNutella]+=1;
			else if(addChoice==2)
				chickenSliceCat4[orderNutella]+=1;
			else if(addChoice==3)
				beefPepperCat4[orderNutella]+=1;
			else if(addChoice==4)
				bananaSliceCat4[orderNutella]+=1;
			else if(addChoice==5)
				chocChipscat4[orderNutella]+=1;
			else if(addChoice==6)
				nutellaAdd4[orderNutella]+=1;
				
		do{
			printf("\nAdd more topping? 1-yes, 2-no :");
			checking1=scanf("%d",&addChoice);
			fflush(stdin);
		}while(inputValid(checking1,addChoice,1,2)!=1);
	}while(addChoice==1);
	}

	}

	}else if(orderChoice==2){
		orderNumber+=1;
			printf("\n---------------------------------------------------------------------------------");
			printf("\n| Category\t\t| Item code\t\t\t| Price (RM)\t\t|");
			printf("\n---------------------------------------------------------------------------------");
			//beverage
			printf("\n| Beverage\t\t| 1.Homesoy\t\t\t|    2.50\t\t|");
			printf("\n| \t\t\t| 2.Orange Juice\t\t|    2.50\t\t|");
			printf("\n| \t\t\t| 3.Ice Lemon Tea\t\t|    2.50\t\t|");
			printf("\n| \t\t\t| 4.Milo\t\t\t|    3.50\t\t|");
			printf("\n| \t\t\t| 5.Mineral Water\t\t|    2.00\t\t|");
			printf("\n| \t\t\t| 6.Can Drinks\t\t\t|    2.50\t\t|");
			printf("\n| \t\t\t| 7.Hot Drinks\t\t\t|    2.50\t\t|");
			printf("\n---------------------------------------------------------------------------------");
		do{
			printf("\nEnter beverage code :");
			checking1=scanf("%d",&beveChoice);
			fflush(stdin);
		}while(inputValid(checking1,beveChoice,1,7)!=1);
		
		if(beveChoice==4){
			totalbeve+=3.50;
		}else if (beveChoice==5){
			totalbeve+=2.00;
		}else
			totalbeve+=2.50;
			beveQuantity[beveChoice-1]++;
			if(beveChoice==1)
				homeSoy[orderNumber]+=1;
			else if(beveChoice==2)
				orangeJuice[orderNumber]+=1;
			else if(beveChoice==3)
				iceLemon[orderNumber]+=1;
			else if(beveChoice==4)
				miloDrink[orderNumber]+=1;
			else if(beveChoice==5)
				mineralWater[orderNumber]+=1;
			else if(beveChoice==6)
				cansDrink[orderNumber]+=1;
			else if(beveChoice==7)
				hotDrink[orderNumber]+=1;
	}
	do{
	printf("\nAdd order? 1-yes, 2-no :");
	checking1=scanf("%d",&moreOrder);
	fflush(stdin);
	}while(inputValid(checking1,moreOrder,1,2)!=1);
	}while(checking1 !=1 || moreOrder == 1 );

	
	totalPrice=totalParatha+totalCrispy+totalLocal+totalTreasure+totalNutella+totalAddon+totalbeve;
		serviceCharge=0.1*totalPrice;
		taxAmount=0.06*totalPrice;
	do{
		printf("\nTotal price:RM %0.2f",totalPrice+serviceCharge+taxAmount);
		printf("\nEnter amount to pay: ");
		checking1=scanf("%f",&payAmount);
		fflush(stdin);
		if(checking1!=1 || payAmount<0)
		printf("\nSorry, you have entered invalid amount.");
		else if(payAmount<totalPrice+taxAmount+serviceCharge)
		printf("\nInsuficient amount, please pay the exact amount or more than the amount. RM %0.2f.",totalPrice+taxAmount+serviceCharge);
}while(checking1!=1 || payAmount<0 || payAmount<totalPrice+taxAmount+serviceCharge);
		serviceCharge=0.1*totalPrice;
		taxAmount=0.06*totalPrice;
		totalBalance=payAmount-totalPrice-serviceCharge-taxAmount;
       
	   system("cls");
		
	printf("\n------------------------------------------");
    puts("\n              Hot n Roll");
    puts("          Kuala Lumpur Central ");
    puts("     50740, Kuala Lumpur, Malaysia ");
	puts("      Hot & Roll Holdings Sdn Bhd    ");
	puts("              +603-5888 9189                     ");
    printf("\n------------------------------------------");
    puts("\n                 Receipt");
    printf(     "Date:%s             Time:%s                            ",__DATE__,__TIME__);
    printf("\n\n------------------------------------------");
    puts("\nItems:                        Price(RM): ");
	orderParatha=1, orderCrispy=1, orderLocal=1, orderTreasure=1, orderNutella=1, orderNumber=1;
    do{
        if(chickenCheese[orderParatha]>0){
            printf("\n Chicken Cheese (Paratha)       4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(blackBeef[orderParatha]>0){
			printf("\n Black Pepper Beef (Paratha)    4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
        		printf("\n+ cheese slice       	        1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(pizzaBeef[orderParatha]>0){
			printf("\n Pizza Beef  (Paratha)          4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(bbqChicken[orderParatha]>0){
			printf("\n BBQ Chicken  (Paratha)         4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(chickenFloss[orderParatha]>0){
			printf("\n Chicken Floss (Paratha)        4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(doubleOnion[orderParatha]>0){
			printf("\n Double Cheese Onion (Paratha)  4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(crunchyPeanut[orderParatha]>0){
			printf("\n Crunchy Peanut (Paratha)       4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(bananaPeanut[orderParatha]>0){
			printf("\n Banana Peanut (Paratha)        4.80\n");
            if(cheeseSliceCat1[orderParatha]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat1[orderParatha]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat1[orderParatha]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat1[orderParatha]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat1[orderParatha]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd1[orderParatha]>0)
				printf("\n+ nutella                       1.00\n");
		}	
		chickenCheese[orderParatha]=0,blackBeef[orderParatha]=0,pizzaBeef[orderParatha]=0,bbqChicken[orderParatha]=0,chickenFloss[orderParatha]=0,doubleOnion[orderParatha]=0,crunchyPeanut[orderParatha]=0,bananaPeanut[orderParatha]=0;
		orderParatha+=1;
	}while(chickenCheese[orderParatha]>0 || blackBeef[orderParatha]>0 || pizzaBeef[orderParatha]>0 || bbqChicken[orderParatha]>0 || chickenFloss[orderParatha]>0 ||doubleOnion[orderParatha]>0 || crunchyPeanut[orderParatha]>0 || bananaPeanut[orderParatha]>0);
	orderParatha=0;
	
	do{
        if(chickenCheese1[orderCrispy]>0){
            printf("\n Chicken Cheese (Crispy)        6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(blackBeef1[orderCrispy]>0){
			printf("\n Black Pepper Beef (Crispy)       6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                       1.00\n");

		}
		if(pizzaBeef1[orderCrispy]>0){
			printf("\n Pizza Beef (Crispy)            6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(bbqChicken1[orderCrispy]>0){
			printf("\n BBQ Chicken (Crispy)           6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(chickenFloss1[orderCrispy]>0){
			printf("\n Chicken Floss (Crispy)         6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                  1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                 1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                        1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips               1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                       1.00\n");
		}
		if(doubleOnion1[orderCrispy]>0){
			printf("\n Double Cheese Onion (Crispy)   6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                        1.00\n");
		}
		if(crunchyPeanut1[orderCrispy]>0){
			printf("\n Crunchy Peanut (Crispy)        6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                        1.00\n");
		}
		if(bananaPeanut1[orderCrispy]>0){
			printf("\n Banana Peanut (Crispy)         6.80\n");
            if(cheeseSliceCat2[orderCrispy]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat2[orderCrispy]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat2[orderCrispy]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat2[orderCrispy]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat2[orderCrispy]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd2[orderCrispy]>0)
				printf("\n+ nutella                        1.00\n");
		}
		chickenCheese1[orderCrispy]=0,blackBeef1[orderCrispy]=0,pizzaBeef1[orderCrispy]=0,bbqChicken1[orderCrispy]=0,chickenFloss1[orderCrispy]=0,doubleOnion1[orderCrispy]=0,crunchyPeanut1[orderCrispy]=0,bananaPeanut1[orderCrispy]=0;
		orderCrispy+=1;
		}while(chickenCheese1[orderCrispy]>0 || blackBeef1[orderCrispy]>0 || pizzaBeef1[orderCrispy]>0 || bbqChicken1[orderCrispy]>0 || chickenFloss1[orderCrispy]>0 ||doubleOnion1[orderCrispy]>0 || crunchyPeanut1[orderCrispy]>0 || bananaPeanut1[orderCrispy]>0);
		orderCrispy=0;
		
	do{
        if(chapattiSausage[orderLocal]>0){
            printf("\n Chappati Sausage               4.50\n");
            if(cheeseSliceCat5[orderLocal]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat5[orderLocal]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat5[orderLocal]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat5[orderLocal]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat5[orderLocal]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd5[orderLocal]>0)
				printf("\n+ nutella                        1.00\n");
		}
		if(chapattiRendang[orderLocal]>0){
			printf("\n Chappati Rendang               4.50\n");
            if(cheeseSliceCat5[orderLocal]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat5[orderLocal]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat5[orderLocal]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat5[orderLocal]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat5[orderLocal]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd5[orderLocal]>0)
				printf("\n+ nutella                        1.00\n");

		}	
		chapattiSausage[orderLocal]=0,chapattiRendang[orderLocal]=0;
		orderLocal+=1;
	}while(chapattiSausage[orderLocal]>0 || chapattiRendang[orderLocal]>0 );
	orderLocal=0;
	
	do{
      	  
    	if(cheezyChicken[orderTreasure]>0){
        	printf("\n Cheezy Chicken                 7.90\n");
            if(cheeseSliceCat3[orderTreasure]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat3[orderTreasure]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat3[orderTreasure]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat3[orderTreasure]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat3[orderTreasure]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd3[orderTreasure]>0)
				printf("\n+ nutella                        1.00\n");
		}
		if(cheezyBeef[orderTreasure]>0){
			printf("\n Cheezy Beef                    7.90\n");
            if(cheeseSliceCat3[orderTreasure]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat3[orderTreasure]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat3[orderTreasure]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat3[orderTreasure]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat3[orderTreasure]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd3[orderTreasure]>0)
				printf("\n+ nutella                        1.00\n");

		}	
		 if(cheezyJumbo[orderTreasure]>0){
            printf("\n Cheezy Jumbo                   7.90\n");
            if(cheeseSliceCat3[orderTreasure]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat3[orderTreasure]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat3[orderTreasure]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat3[orderTreasure]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat3[orderTreasure]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd3[orderTreasure]>0)
				printf("\n+ nutella                        1.00\n");
		}
		cheezyChicken[orderTreasure]=0,cheezyBeef[orderTreasure]=0,cheezyJumbo[orderTreasure]=0;
		orderTreasure+=1;
	}while(cheezyChicken[orderTreasure]>0 || cheezyBeef[orderTreasure]>0 || cheezyJumbo[orderTreasure]>0);
	orderTreasure=0;

	do{ 
        if(nuttyNutella[orderNutella]>0){
            printf("\n Nutty Nutella                   8.00\n");
            if(cheeseSliceCat4[orderNutella]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat4[orderNutella]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat4[orderNutella]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat4[orderNutella]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat4[orderNutella]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd4[orderNutella]>0)
				printf("\n+ nutella                        1.00\n");
		}
		if(cheeseNutella[orderNutella]>0){
			printf("\n Cheese Nutella                 9.90\n");
            if(cheeseSliceCat4[orderNutella]>0)
                printf("\n+ cheese slice                   1.00\n");
			if(chickenSliceCat4[orderNutella]>0)
				printf("\n+ chicken slice                  1.00\n");
			if(beefPepperCat4[orderNutella]>0)
                printf("\n+ beef pepperoni                 1.00\n");
			if(bananaSliceCat4[orderNutella]>0)
				printf("\n+ banana                         1.00\n");
			if(chocChipscat4[orderNutella]>0)
                printf("\n+ chocolate chips                1.00\n");
			if(nutellaAdd4[orderNutella]>0)
				printf("\n+ nutella                        1.00\n");

		}
		nuttyNutella[orderNutella]=0,cheeseNutella[orderNutella]=0; 
		orderNutella+=1;
	}while(nuttyNutella[orderNutella]>0 || cheeseNutella[orderNutella]>0 );
	orderNutella=0;
		do{{
			if(homeSoy[orderNumber]>0)
				printf("\n Homesoy                         2.50\n");
			if(orangeJuice[orderNumber]>0)
				printf("\n Orange Juice                    2.50\n");
			if(iceLemon[orderNumber]>0)
				printf("\n Ice Lemon Tea                   2.50\n");
			if(miloDrink[orderNumber]>0)
				printf("\n Milo                            3.50\n");
			if(mineralWater[orderNumber]>0)
				printf("\n Mineral Water                   2.00\n");
			if(cansDrink[orderNumber]>0)
				printf("\n Canned Drinks                   2.50\n");
			if(hotDrink[orderNumber]>0)
				printf("\n Hot Drinks                      2.50\n");
			}
			
			homeSoy[orderNumber]=0,orangeJuice[orderNumber]=0,iceLemon[orderNumber]=0,miloDrink[orderNumber]=0,mineralWater[orderNumber]=0,cansDrink[orderNumber]=0,hotDrink[orderNumber]=0; 
			orderNumber+=1;
		}while(homeSoy[orderNumber]>0 || orangeJuice[orderNumber]>0 || iceLemon[orderNumber]>0 || miloDrink[orderNumber]>0 || mineralWater[orderNumber]>0 || cansDrink[orderNumber]>0 || hotDrink[orderNumber]>0 );
		orderNumber=0;
		
		
    puts("\n\n-------------------------------------------");
    printf("\n		      Subtotal: RM%0.2f",totalPrice); 
    printf("\n	   Service charge(10%%): RM%0.2f",serviceCharge);
    printf("\n         	       GST(6%%): RM%0.2f",taxAmount);
    printf("\n		   Total price: RM %0.2f ",totalPrice+taxAmount+serviceCharge);
	printf("\n      	               Balance: RM %0.2f            ",totalBalance);
	printf("\n\n           www.hotandroll.com               ");
	printf("\n           Please come again!                ");
    printf("\n-------------------------------------------");

        
	do{
		printf("\nNext Customer 1-Yes, 2-No :");
		checking1=scanf("%d",&nextCus);
		fflush(stdin);
		if(checking1!=1 )
			printf("Invalid input, insert number\n");
		else if( nextCus>2 || nextCus<1)
			printf("Invalid number, please insert numbers within 1 to 2\n");
	}while(checking1!=1 || nextCus>2 || nextCus<1);
    totalPrice=0,totalParatha=0,totalCrispy=0,totalLocal=0,totalTreasure=0,totalNutella=0,totalAddon=0,totalbeve=0,taxAmount=0,totalBalance=0;
}while(nextCus==1);

    system("cls");
printf("\n\nSUMMARY\n");
printf("\n-----------------------------------------");
	printf("\n| Category\t\t\t\t|");
	printf("\n-----------------------------------------");
	//category food&beve
	printf("\n| Paratha Wrap\t\t\t:%d\t|",parathaQuantity[0]+parathaQuantity[1]+parathaQuantity[2]+parathaQuantity[3]+parathaQuantity[4]+parathaQuantity[5]+parathaQuantity[6]+parathaQuantity[7]);
	printf("\n| Crispy Wrap\t\t\t:%d\t|",crispyQuantity[0]+crispyQuantity[1]+crispyQuantity[2]+crispyQuantity[3]+crispyQuantity[4]+crispyQuantity[5]+crispyQuantity[6]+crispyQuantity[7]);
    printf("\n| Special Local Taste\t\t:%d\t|",localQuantity[0]+localQuantity[1]);
    printf("\n| Wholemeal Treasure Meal\t:%d\t|",treasureQuantity[0]+treasureQuantity[1]+treasureQuantity[2]);
    printf("\n| Nutella Crispy\t\t:%d\t|",nutellaQuantity[0]+nutellaQuantity[1]);
    printf("\n| Add Ons\t\t\t:%d\t|",addQuantity[0]+addQuantity[1]+addQuantity[2]+addQuantity[3]+addQuantity[4]+addQuantity[5]);
    printf("\n| Beverage\t\t\t:%d\t|",beveQuantity[0]+beveQuantity[1]+beveQuantity[2]+beveQuantity[3]+beveQuantity[4]+beveQuantity[5]+beveQuantity[6]);
	printf("\n-----------------------------------------");
printf("\n---------------------------------------------------------------------------------------------------------");
printf("\n| Paratha Wrap\t\t\t|  Crispy Wrap\t\t\t| Special Local Taste\t\t\t| ");
    printf("\n|  Chicken & Cheese\t:%d\t| Chicken & Cheese\t:%d\t|Chapatti Chicken Sausage\t:%d\t|",parathaQuantity[0],crispyQuantity[0],localQuantity[0]);
    printf("\n|  Black Pepper Beef\t:%d\t| Black Pepper Beef\t:%d\t|Chapatti Chicken Rendang\t:%d\t|",parathaQuantity[1],crispyQuantity[1],localQuantity[1]);
    printf("\n|  Pizza Beef\t\t:%d\t| Pizza Beef\t\t:%d\t|\t\t\t\t\t|",parathaQuantity[2],crispyQuantity[2]);
    printf("\n|  BBQ Chicken\t\t:%d\t| BBQ Chicken\t\t:%d\t|\t\t\t\t\t|",parathaQuantity[3],crispyQuantity[3]);
    printf("\n|  Chicken Floss\t:%d\t| Chicken Floss\t\t:%d\t|\t\t\t\t	|",parathaQuantity[4],crispyQuantity[4]);
    printf("\n|  Double Cheese Onion\t:%d\t| Double Cheese Onion\t:%d\t|\t\t\t\t\t|",parathaQuantity[5],crispyQuantity[5]);
    printf("\n|  Crunchy Peanut\t:%d\t| Crunchy Peanut\t:%d\t|\t\t\t\t	|",parathaQuantity[6],crispyQuantity[6]);
    printf("\n|  Banana Peanut\t:%d\t| Banana Peanut\t\t:%d\t|\t\t\t\t	|",parathaQuantity[7],crispyQuantity[7]);
	printf("\n---------------------------------------------------------------------------------------------------------");
printf("\n---------------------------------------------------------------------------------------------------------");
	printf("\n| Wholemeal Treasure Meal\t| Nutella Crispy\t\t| Add On\t\t\t\t|");
    printf("\n|  Cheezy Chicken\t:%d\t|  Nutty Nutella\t:%d\t|  Cheese\t\t\t:%d\t|",treasureQuantity[0],nutellaQuantity[0],addQuantity[0]);
    printf("\n|  Cheezy Beef\t\t:%d\t|  Cheese Nutella\t:%d\t|  Chicken Slice\t\t:%d\t|",treasureQuantity[1],nutellaQuantity[1],addQuantity[1]);
    printf("\n|  Cheezy Jumbo\t\t:%d\t| \t\t\t\t|  Beef Pepperoni\t\t:%d\t|",treasureQuantity[2],addQuantity[2]);
    printf("\n|  \t\t\t\t| \t\t\t\t|  Banana\t\t\t:%d\t|",addQuantity[3]);
    printf("\n|  \t\t\t\t| \t\t\t\t|  Chocolate Chips\t\t:%d\t|",addQuantity[4]);
    printf("\n|  \t\t\t\t| \t\t\t\t|  Nutella\t\t\t:%d\t|",addQuantity[5]);
	printf("\n---------------------------------------------------------------------------------------------------------");
 printf("\n---------------------------------");
	printf("\n| Beverage\t\t\t|");
	printf("\n---------------------------------");
	//category beve
	printf("\n| Homesoy\t\t:%d\t|",beveQuantity[0]);
	printf("\n| Orange Juice\t\t:%d\t|",beveQuantity[1]);
    printf("\n| Ice Lemon Tea\t\t:%d\t|",beveQuantity[2]);
    printf("\n| Milo\t\t\t:%d\t|",beveQuantity[3]);
    printf("\n| Mineral Water\t\t:%d\t|",beveQuantity[4]);
    printf("\n| Can Drinks\t\t:%d\t|",beveQuantity[5]);
    printf("\n| Hot Drinks\t\t:%d\t|",beveQuantity[6]);
	printf("\n---------------------------------");

	
printf("\n\nRANKING\n\n");
int parathaCount=parathaQuantity[0]+parathaQuantity[1]+parathaQuantity[2]+parathaQuantity[3]+parathaQuantity[4]+parathaQuantity[5]+parathaQuantity[6]+parathaQuantity[7];
int crispyCount=crispyQuantity[0]+crispyQuantity[1]+crispyQuantity[2]+crispyQuantity[3]+crispyQuantity[4]+crispyQuantity[5]+crispyQuantity[6]+crispyQuantity[7];
int localCount=localQuantity[0]+localQuantity[1];
int treasureCount=treasureQuantity[0]+treasureQuantity[1]+treasureQuantity[2];
int nutellaCount=nutellaQuantity[0]+nutellaQuantity[1];
int addCount=addQuantity[0]+addQuantity[1]+addQuantity[2]+addQuantity[3]+addQuantity[4]+addQuantity[5];
int beveCount=beveQuantity[0]+beveQuantity[1]+beveQuantity[2]+beveQuantity[3]+beveQuantity[4]+beveQuantity[5]+beveQuantity[6];
printf("-------------------------------------------");
printf("\n| Category Ranking                       |\n");
printf("-------------------------------------------\n");
for(int i=0; i<7; i++){
	if(parathaCount>=crispyCount && parathaCount>=localCount && parathaCount>=treasureCount && parathaCount>=nutellaCount && parathaCount>=addCount && parathaCount>=beveCount){
		printf("| Paratha Wrap       :%d\t          \t |\n",parathaCount);
		parathaCount= -1;
	}else if(crispyCount>=parathaCount && crispyCount>=localCount && crispyCount>=treasureCount && crispyCount>=nutellaCount && crispyCount>=addCount && crispyCount>=beveCount){
		printf("| Crispy Wrap        :%d\t          \t |\n",crispyCount);
		crispyCount= -1;
	}else if(localCount>=parathaCount && localCount>=crispyCount && localCount>=treasureCount && localCount>=nutellaCount && localCount>=addCount && localCount>=beveCount){
		printf("| Local Wrap         :%d\t          \t |\n",localCount);
		localCount= -1;
	}else if(treasureCount>=parathaCount && treasureCount>=crispyCount && treasureCount>=localCount && treasureCount>=nutellaCount && treasureCount>=addCount && treasureCount>=beveCount){
		printf("| Treasure Wrap      :%d\t          \t |\n",treasureCount);
		treasureCount= -1;
	}else if(nutellaCount>=parathaCount && nutellaCount>=crispyCount && nutellaCount>=localCount && nutellaCount>=treasureCount && nutellaCount>=addCount && nutellaCount>=beveCount){
		printf("| Crispy Nutella     :%d\t          \t |\n",nutellaCount);
		nutellaCount= -1;
	}else if(addCount>=parathaCount && addCount>=crispyCount && addCount>=localCount && addCount>=treasureCount && addCount>=nutellaCount && addCount>=beveCount){
		printf("| Add On Topping     :%d\t                 |\n",addCount);
		addCount= -1;
	}else if(beveCount>=parathaCount && beveCount>=crispyCount && beveCount>=localCount && beveCount>=treasureCount && beveCount>=nutellaCount && beveCount>=addCount){
		printf("| Beverage           :%d\t          \t |\n",beveCount);
		beveCount= -1;
	}
	

}
printf("-------------------------------------------");
printf("\n| Paratha Wrap Code                       |\n");

for(int i=0; i<8; i++){
	if(parathaQuantity[0]>=parathaQuantity[1] && parathaQuantity[0]>=parathaQuantity[2] && parathaQuantity[0]>=parathaQuantity[3] && parathaQuantity[0]>=parathaQuantity[4] && parathaQuantity[0]>=parathaQuantity[5] && parathaQuantity[0]>=parathaQuantity[6] && parathaQuantity[0]>=parathaQuantity[7]){
		printf("| Chicken & Cheese       :%d\t          |\n",parathaQuantity[0]);
		parathaQuantity[0]= -1;
	}else if(parathaQuantity[1]>=parathaQuantity[0] && parathaQuantity[1]>=parathaQuantity[2] && parathaQuantity[1]>=parathaQuantity[3] && parathaQuantity[1]>=parathaQuantity[4] && parathaQuantity[1]>=parathaQuantity[5] && parathaQuantity[1]>=parathaQuantity[6] && parathaQuantity[1]>=parathaQuantity[7]){
		printf("| Black Pepper Beef      :%d\t          |\n",parathaQuantity[1]);
		parathaQuantity[1]= -1;
	}else if(parathaQuantity[2]>=parathaQuantity[0] && parathaQuantity[2]>=parathaQuantity[1] && parathaQuantity[2]>=parathaQuantity[3] && parathaQuantity[2]>=parathaQuantity[4] && parathaQuantity[2]>=parathaQuantity[5] && parathaQuantity[2]>=parathaQuantity[6] && parathaQuantity[2]>=parathaQuantity[7]){
		printf("| Pizza Beef             :%d\t          |\n",parathaQuantity[2]);
		parathaQuantity[2]= -1;
	}else if(parathaQuantity[3]>=parathaQuantity[0] && parathaQuantity[3]>=parathaQuantity[1] && parathaQuantity[3]>=parathaQuantity[2] && parathaQuantity[3]>=parathaQuantity[4] && parathaQuantity[3]>=parathaQuantity[5] && parathaQuantity[3]>=parathaQuantity[6] && parathaQuantity[3]>=parathaQuantity[7]){
		printf("| BBQ Chicken            :%d\t          |\n",parathaQuantity[3]);
		parathaQuantity[3]= -1;
	}else if(parathaQuantity[4]>=parathaQuantity[0] && parathaQuantity[4]>=parathaQuantity[1] && parathaQuantity[4]>=parathaQuantity[2] && parathaQuantity[4]>=parathaQuantity[3] && parathaQuantity[4]>=parathaQuantity[5] && parathaQuantity[4]>=parathaQuantity[6] && parathaQuantity[4]>=parathaQuantity[7]){
		printf("| Chicken Floss          :%d\t          |\n",parathaQuantity[4]);
		parathaQuantity[4]= -1;
	}else if(parathaQuantity[5]>=parathaQuantity[0] && parathaQuantity[5]>=parathaQuantity[1] && parathaQuantity[5]>=parathaQuantity[2] && parathaQuantity[5]>=parathaQuantity[3] && parathaQuantity[5]>=parathaQuantity[4] && parathaQuantity[5]>=parathaQuantity[6] && parathaQuantity[5]>=parathaQuantity[7]){
		printf("| Double Cheese Onion    :%d\t          |\n",parathaQuantity[5]);
		parathaQuantity[5]= -1;
	}else if(parathaQuantity[6]>=parathaQuantity[0] && parathaQuantity[6]>=parathaQuantity[1] && parathaQuantity[6]>=parathaQuantity[2] && parathaQuantity[6]>=parathaQuantity[3] && parathaQuantity[6]>=parathaQuantity[4] && parathaQuantity[6]>=parathaQuantity[5] && parathaQuantity[6]>=parathaQuantity[7]){
		printf("| Crunchy Peanut         :%d\t          |\n",parathaQuantity[6]);
		parathaQuantity[6]= -1;
	}else if(parathaQuantity[7]>=parathaQuantity[0] && parathaQuantity[7]>=parathaQuantity[1] && parathaQuantity[7]>=parathaQuantity[2] && parathaQuantity[7]>=parathaQuantity[3] && parathaQuantity[7]>=parathaQuantity[4] && parathaQuantity[7]>=parathaQuantity[5] && parathaQuantity[7]>=parathaQuantity[6]){
		printf("| Banana Peanut          :%d\t          |\n",parathaQuantity[7]);
		parathaQuantity[7]= -1;
	}

}

printf("-------------------------------------------");
printf("\n| Crispy Wrap Code                        |\n");
for(int i=0; i<8; i++){
	if(crispyQuantity[0]>=crispyQuantity[1] && crispyQuantity[0]>=crispyQuantity[2] && crispyQuantity[0]>=crispyQuantity[3] && crispyQuantity[0]>=crispyQuantity[4] && crispyQuantity[0]>=crispyQuantity[5] && crispyQuantity[0]>=crispyQuantity[6] && crispyQuantity[0]>=crispyQuantity[7] ){
		printf("| Chicken & Cheese       :%d\t          |\n",crispyQuantity[0]);
		crispyQuantity[0]= -1;
	}else if(crispyQuantity[1]>=crispyQuantity[0] && crispyQuantity[1]>=crispyQuantity[2] && crispyQuantity[1]>=crispyQuantity[3] && crispyQuantity[1]>=crispyQuantity[4] && crispyQuantity[1]>=crispyQuantity[5] && crispyQuantity[1]>=crispyQuantity[6] && crispyQuantity[1]>=crispyQuantity[7]){
		printf("| Black Pepper Beef      :%d\t          |\n",crispyQuantity[1]);
		crispyQuantity[1]= -1;
	}else if(crispyQuantity[2]>=crispyQuantity[0] && crispyQuantity[2]>=crispyQuantity[1] && crispyQuantity[2]>=crispyQuantity[3] && crispyQuantity[2]>=crispyQuantity[4] && crispyQuantity[2]>=crispyQuantity[5] && crispyQuantity[2]>=crispyQuantity[6] && crispyQuantity[2]>=crispyQuantity[7] ){
		printf("| Pizza Beef             :%d\t          |\n",crispyQuantity[2]);
		crispyQuantity[2]= -1;
	}else if(crispyQuantity[3]>=crispyQuantity[0] && crispyQuantity[3]>=crispyQuantity[1] && crispyQuantity[3]>=crispyQuantity[2] && crispyQuantity[3]>=crispyQuantity[4] && crispyQuantity[3]>=crispyQuantity[5] && crispyQuantity[3]>=crispyQuantity[6] && crispyQuantity[3]>=crispyQuantity[7] ){
		printf("| BBQ Chicken            :%d\t          |\n",crispyQuantity[3]);
		crispyQuantity[3]= -1;
	}else if(crispyQuantity[4]>=crispyQuantity[0] && crispyQuantity[4]>=crispyQuantity[1] && crispyQuantity[4]>=crispyQuantity[2] && crispyQuantity[4]>=crispyQuantity[3] && crispyQuantity[4]>=crispyQuantity[5] && crispyQuantity[4]>=crispyQuantity[6] && crispyQuantity[4]>=crispyQuantity[7] ){
		printf("| Chicken Floss          :%d\t          |\n",crispyQuantity[4]);
		crispyQuantity[4]= -1;
	}else if(crispyQuantity[5]>=crispyQuantity[0] && crispyQuantity[5]>=crispyQuantity[1] && crispyQuantity[5]>=crispyQuantity[2] && crispyQuantity[5]>=crispyQuantity[3] && crispyQuantity[5]>=crispyQuantity[4] && crispyQuantity[5]>=crispyQuantity[6] && crispyQuantity[5]>=crispyQuantity[7] ){
		printf("| Double Cheese Onion    :%d\t          |\n",crispyQuantity[5]);
		crispyQuantity[5]= -1;
	}else if(crispyQuantity[6]>=crispyQuantity[0] && crispyQuantity[6]>=crispyQuantity[1] && crispyQuantity[6]>=crispyQuantity[2] && crispyQuantity[6]>=crispyQuantity[3] && crispyQuantity[6]>=crispyQuantity[4] && crispyQuantity[6]>=crispyQuantity[5] && crispyQuantity[6]>=crispyQuantity[7] ){
		printf("| Crunchy Peanut         :%d\t          |\n",crispyQuantity[6]);
		crispyQuantity[6]= -1;
	}else if(crispyQuantity[7]>=crispyQuantity[0] && crispyQuantity[7]>=crispyQuantity[1] && crispyQuantity[7]>=crispyQuantity[2] && crispyQuantity[7]>=crispyQuantity[3] && crispyQuantity[7]>=crispyQuantity[4] && crispyQuantity[7]>=crispyQuantity[5] && crispyQuantity[7]>=crispyQuantity[6] ){
		printf("| Banana Peanut          :%d\t          |\n",crispyQuantity[7]);
		crispyQuantity[7]= -1;
	}
}
printf("-------------------------------------------");
printf("\n| Special Local Taste                     |\n");
for(int i=0; i<2; i++){
	if(localQuantity[0]>=localQuantity[1] ){
		printf("| Chappati Chicken Sausage   :%d\t          |\n", localQuantity[0]);
		localQuantity[0]= -1;
	}else if(localQuantity[1]>=localQuantity[0]){
		printf("| Chapatti Chicken Rendang   :%d\t          |\n", localQuantity[1]);
		localQuantity[1]= -1;
	}
}
printf("-------------------------------------------");
printf("\n| Whole Meal Treasure                     |\n");
for(int i=0; i<3; i++){
	if(treasureQuantity[0]>=treasureQuantity[1] && treasureQuantity[0]>=treasureQuantity[2]){
		printf("| Cheezy Chicken         :%d\t          |\n", treasureQuantity[0]);
		treasureQuantity[0]= -1;
	}else if(treasureQuantity[1]>=treasureQuantity[0] && treasureQuantity[1]>=treasureQuantity[2]){
		printf("| Cheezy Beef            :%d\t          |\n", treasureQuantity[1]);
		treasureQuantity[1]= -1;
	}else if(treasureQuantity[2]>=treasureQuantity[1] && treasureQuantity[2]>=treasureQuantity[0]){
		printf("| Cheezy Jumbo           :%d\t          |\n", treasureQuantity[2]);
		treasureQuantity[2]= -1;
	}
}
printf("-------------------------------------------");
printf("\n| Nutella Crispy                          |\n");
for(int i=0; i<2; i++){
	if(nutellaQuantity[0]>=nutellaQuantity[1]){
		printf("| Nutty Nutella          :%d\t          |\n", nutellaQuantity[0]);
		nutellaQuantity[0]= -1;
	}else if(nutellaQuantity[1]>=nutellaQuantity[0] ){
		printf("| Cheese Nutella         :%d\t          |\n", nutellaQuantity[1]);
		nutellaQuantity[1]= -1;
	}
}
printf("-------------------------------------------");
printf("\n| Category Add Ons                        |\n");
for(int i=0; i<8; i++){
	if(addQuantity[0]>=addQuantity[1] && addQuantity[0]>=addQuantity[2] && addQuantity[0]>=addQuantity[3] && addQuantity[0]>=addQuantity[4] && addQuantity[0]>=addQuantity[5] && addQuantity[0]>=addQuantity[6] && addQuantity[0]>=addQuantity[7] ){
		printf("|  Cheese Slice       :%d\t          |\n",addQuantity[0]);
		addQuantity[0]= -1;
	}else if(addQuantity[1]>=addQuantity[0] && addQuantity[1]>=addQuantity[2] && addQuantity[1]>=addQuantity[3] && addQuantity[1]>=addQuantity[4] && addQuantity[1]>=addQuantity[5] && addQuantity[1]>=addQuantity[6] && addQuantity[1]>=addQuantity[7]){
		printf("|  Chicken Slice      :%d\t          |\n",addQuantity[1]);
		addQuantity[1]= -1;
	}else if(addQuantity[2]>=addQuantity[0] && addQuantity[2]>=addQuantity[1] && addQuantity[2]>=addQuantity[3] && addQuantity[2]>=addQuantity[4] && addQuantity[2]>=addQuantity[5] && addQuantity[2]>=addQuantity[6] && addQuantity[2]>=addQuantity[7] ){
		printf("|  Beef Peperoni      :%d\t          |\n",addQuantity[2]);
		addQuantity[2]= -1;
	}else if(addQuantity[3]>=addQuantity[0] && addQuantity[3]>=addQuantity[1] && addQuantity[3]>=addQuantity[2] && addQuantity[3]>=addQuantity[4] && addQuantity[3]>=addQuantity[5] && addQuantity[3]>=addQuantity[6] && addQuantity[3]>=addQuantity[7] ){
		printf("|  Banana Slice       :%d\t          |\n",addQuantity[3]);
		addQuantity[3]= -1;
	}else if(addQuantity[4]>=addQuantity[0] && addQuantity[4]>=addQuantity[1] && addQuantity[4]>=addQuantity[2] && addQuantity[4]>=addQuantity[3] && addQuantity[4]>=addQuantity[5] && addQuantity[4]>=addQuantity[6] && addQuantity[4]>=addQuantity[7] ){
		printf("|  Chocolate Chips    :%d\t          |\n",addQuantity[4]);
		addQuantity[4]= -1;
	}else if(addQuantity[5]>=addQuantity[0] && addQuantity[5]>=addQuantity[1] && addQuantity[5]>=addQuantity[2] && addQuantity[5]>=addQuantity[3] && addQuantity[5]>=addQuantity[4] && addQuantity[5]>=addQuantity[6] && addQuantity[5]>=addQuantity[7] ){
		printf("|  Nutella            :%d\t          |\n",addQuantity[5]);
		addQuantity[5]= -1;
	}
}
printf("-------------------------------------------");
printf("\n| Category Beverage                       |\n");
for(int i=0; i<7; i++){
	if(beveQuantity[0]>=beveQuantity[1] && beveQuantity[0]>=beveQuantity[2] && beveQuantity[0]>=beveQuantity[3] && beveQuantity[0]>=beveQuantity[4] && beveQuantity[0]>=beveQuantity[5] && beveQuantity[0]>=beveQuantity[6] && beveQuantity[0]>=beveQuantity[7] ){
		printf("|  Homesoy                :%d\t          |\n",beveQuantity[0]);
		beveQuantity[0]= -1;
	}else if(beveQuantity[1]>=beveQuantity[0] && beveQuantity[1]>=beveQuantity[2] && beveQuantity[1]>=beveQuantity[3] && beveQuantity[1]>=beveQuantity[4] && beveQuantity[1]>=beveQuantity[5] && beveQuantity[1]>=beveQuantity[6] && beveQuantity[1]>=beveQuantity[7]){
		printf("|  Orange Juice           :%d\t          |\n",beveQuantity[1]);
		beveQuantity[1]= -1;
	}else if(beveQuantity[2]>=beveQuantity[0] && beveQuantity[2]>=beveQuantity[1] && beveQuantity[2]>=beveQuantity[3] && beveQuantity[2]>=beveQuantity[4] && beveQuantity[2]>=beveQuantity[5] && beveQuantity[2]>=beveQuantity[6] && beveQuantity[2]>=beveQuantity[7] ){
		printf("|  Ice Lemon Tea          :%d\t          |\n",beveQuantity[2]);
		beveQuantity[2]= -1;
	}else if(beveQuantity[3]>=beveQuantity[0] && beveQuantity[3]>=beveQuantity[1] && beveQuantity[3]>=beveQuantity[2] && beveQuantity[3]>=beveQuantity[4] && beveQuantity[3]>=beveQuantity[5] && beveQuantity[3]>=beveQuantity[6] && beveQuantity[3]>=beveQuantity[7] ){
		printf("|  Milo                   :%d\t          |\n",beveQuantity[3]);
		beveQuantity[3]= -1;
	}else if(beveQuantity[4]>=beveQuantity[0] && beveQuantity[4]>=beveQuantity[1] && beveQuantity[4]>=beveQuantity[2] && beveQuantity[4]>=beveQuantity[3] && beveQuantity[4]>=beveQuantity[5] && beveQuantity[4]>=beveQuantity[6] && beveQuantity[4]>=beveQuantity[7] ){
		printf("|  Mineral Water          :%d\t          |\n",beveQuantity[4]);
		beveQuantity[4]= -1;
	}else if(beveQuantity[5]>=beveQuantity[0] && beveQuantity[5]>=beveQuantity[1] && beveQuantity[5]>=beveQuantity[2] && beveQuantity[5]>=beveQuantity[3] && beveQuantity[5]>=beveQuantity[4] && beveQuantity[5]>=beveQuantity[6] && beveQuantity[5]>=beveQuantity[7] ){
		printf("|  Canned Drinks          :%d\t          |\n",beveQuantity[5]);
		beveQuantity[5]= -1;
	}else if(beveQuantity[6]>=beveQuantity[0] && beveQuantity[6]>=beveQuantity[1] && beveQuantity[6]>=beveQuantity[2] && beveQuantity[6]>=beveQuantity[3] && beveQuantity[6]>=beveQuantity[4] && beveQuantity[6]>=beveQuantity[5] && beveQuantity[6]>=beveQuantity[7] ){
		printf("|  Hot Drinks             :%d\t          |\n",beveQuantity[6]);
		beveQuantity[6]= -1;
	}	
}
printf("-------------------------------------------");
}

inputValid(int f,int g, int range1, int range2)
{
	 if(f!=1){
		printf("Invalid input, please insert number.");
		return 0;
	}else if(g < range1 || g > range2){
		printf("Invalid number, please insert number within %d to %d",range1,range2);
		return 0;
	}return 1;
}





	



