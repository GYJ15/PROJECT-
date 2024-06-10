#include <stdio.h>  
#include <stdlib.h> // using function of rand()  
#include <windows.h>//system("cls"),system("pause"),system() function 
#include <time.h> //using srand() function  
#include <string.h> // strcpy,strcmp
#define ROWS 5
#define COLS 5 
#define adultprice 12
#define schildprice 6

//function prototype
void game_menu(); //done 
void game_page();  //done 
void page_cinema();  //done  
void main_page();  //done 
void Seatshows() ;//done
void displaySeats() ;//done
void displaySelectedSeats();  //done 
void selectSeat(); //done   
void payment();

/* Element using in this project is : 
1.Control sturucture  
2.Function  
3.Array  
4.Poniter  
5.Structures  */  



//global variable  
char seats[ROWS][COLS];
int selectSeats[ROWS*COLS][2];
int numselectSeats =0;  
char discount_code[]={"GoodluckinProgramDesign"},dis[50];

//element of structure  
struct informationcust
{
	char name[100];
	char mobile[15];
	int selectedSeats[ROWS * COLS][2];
    int numSelectedSeats;
};
//main function call 
int main(){ 
 

main_page();  //function call  


return 0;  
}

//function defination
void main_page(){ 

int option;  
do{
sleep(2);  
system("cls");  
puts("\t\t\t\t***************Welcome to our mini project**************\n");  
printf("%32c1. Mini Game(Guess Number)\n",' '); 
printf("%32c2. Exit\n\n" ,' ');  
printf("%32cMini game will link to our cinema system, mini game is our discount system\n\n",' '); 
printf("%32cPlease select the option [1 or 2]:",' '); 
scanf("%d",&option); 
 if(option==1){  
game_menu();
}else if(option==2){ 
exit(0); 
}
else{  
printf("\n%15cEntered the incorrect option please try again ! (T_T)\n\n",' ');
}

}while(option !=1 ||option !=2); 

}
// HERE THE CODE IS ABOUT GAME  
void game_menu(){ 

char choice;


system("color F0"); // function like system("color AB) A reperesent background color  and B reperesent word color , AB number is represent hexa form
system("cls");

puts("\n\t\t\t\t\tWELCOME TO OUR MINI GAME --> GUESS NUMBERS\n\n"); 

printf(" %6c Rule for this mini game:\n\n",' ');  
printf(" %6c 1.This game only have 5 chance to get the voucher discont in cinema\n",' ');  
printf(" %6c 2.Number would assign in random way\n",' ');
printf(" %7c3.range of the number would between at 1-100\n\n",' '); 
printf("%1cREMINDER : PLEASE PREPARE PEPER AND WRITE DOWN WHAT NUMBERS HAS GUESSED BEFORE IF NOT I SCARE WILL BE BLURING\n",' ');  
printf("\n%6c DO you want to start the game:[Yes-Y/No-N]:",' ');  
scanf(" %c",&choice);  

 
switch(choice){
    
int player; 
case 'y':case'Y': 
  
game_page(); 
	

break;

case 'n': case'N': 
system("color 07");  
main_page();

break; 

default : 
puts("\n\tInavlid chioce! Please try again.") ;  
sleep(1);
game_menu(); 

break;    
}
}

void game_page(){  

int number,i,guess;  
int chance=5;  
// srand() reprsent seed random  , time(0) represent imediately  , if time(1) will need to wait one second after one second the code will excuate.
srand(time(0));    // if we without this srand compiler will always keep first time complier generate  the first number and the number wont be change  
number=rand()%100+1;  
system("cls");
printf("\t\t\t****************Range of the numbers is between at 1-100****************\n\n");  
printf("\t\t\t\t\t\tYou only have %d chance\n\n",chance);   
while (chance){ 
printf("%16cPlease enter your guess number:",' ');
scanf("%d",&guess);  
if(guess<number){  
puts("\n\t\tGuessing number too small please try again\n\n");  
}else if(guess>number){  
puts("\t\tGuessing number too big please try again\n\n");  
}else if(guess==number){  
puts("\n\n\t\tCongratulation you have guessed the correct answer !!! >_<\n\n");
printf("\n\t\t Your discount code is < %s >\n",discount_code);  
system("pause");
system("color 07"); 
page_cinema();
}
chance --;  
}if (chance==0){    
puts("\t\tUnfortunely you cant get the vourcher for discount!! T_T\n");  
system("pause");  
system("color 07");
page_cinema();  
}
}  

// HERE THE CODES IS ABOUT CINEMA 

void page_cinema(){    

char choice,moviename[100],foodname[100];
	int qty,movienum,x,p,adult,kid,senior,people,foodnum;
	float time,total,foodprice,*fp;  
	char ch;  
		int row ,col;
		float tadult,tchildren,tsenior;
	 
	 
	
	// element of pointer  
	fp=&foodprice;
	system("cls");
	puts("------------------------------------------------------");
	puts("                   WELCOME TO CINEMA                  ");
	puts("------------------------------------------------------");
	struct informationcust customer[1];
	int j;
	fflush(stdin);  
	printf("Name 		:");
	gets(customer[j].name); 
	printf("\nPhone Number (without '-'):   ");
	scanf("%s",&customer[j].mobile);
	system("cls");
	printf("\n\nMOVIES");
	printf("\n1.AVATAR");
	printf("\n2.THE SMURFS");
	printf("\n3.FROZEN");
	printf("\n-------------------------------------------------------");
	printf("\nMOVIE NUMBER     :");
	scanf("%d",&movienum);
	fflush(stdin);
	printf("Adult        :");
	scanf("%d",&adult);
	printf("Kid          :");
	scanf("%d",&kid);
	printf("Senior/OKU   :");
	scanf("%d",&senior);
	
	p =adult+kid+senior;
	
	switch (movienum)
	{
	case 1 :printf("Select Time : 12.00pm        15.00pm         20.00pm");
			printf("\nTime   :");
			scanf("%f",&time);
			strcpy (moviename,"AVATAR");
			if (time==12||time==12.00)
			{
				strcpy (moviename,"Avatar---12.00p.m.");
			}
			else if(time==15||time==15.00)
			{
				strcpy(moviename,"Avatar---15.00p.m.");
			}
			else if(time==20||time==20.00)
			{
				strcpy(moviename,"Avatar---20.00p.m.");
			}
			break;
	case 2 :printf("Select Time : 13.00pm        16.00pm         22.00pm");
			printf("\nTime   :");
			scanf("%f",&time);
			strcpy (moviename,"THE SMURFS");
			if (time==13||time==13.00)
			{
				strcpy (moviename,"THE SMURFS---13.00p.m.");
			}
			else if(time==16||time==16.00)
			{
				strcpy(moviename,"THE SMURFS---16.00p.m.");
			}
			else if(time==22||time==22.00)
			{
				strcpy(moviename,"THE SMURFS---22.00p.m.");
			}
			break;
	case 3 :printf("Select Time : 10.00am        15.30pm         21.00pm");
			printf("\nTime   :");
			scanf("%f",&time);
			strcpy (moviename,"FROZEN");
			if (time==10||time==10.00)
			{
				strcpy (moviename,"FROZEN---10.00p.m.");
			}
			else if(time==15.30)
			{
				strcpy(moviename,"FROZEN---15.30p.m.");
			}
			else if(time==21||time==21.00)
			{
				strcpy(moviename,"FROZEN---21.00p.m.");
			}
			break;
		}
		Seatshows();
	system("cls");
	int i;
   for (i = 0; i < p; i++) {
    displaySeats();
    displaySelectedSeats();
    selectSeat();
}

// copy selectSeats to customer[j].selectedSeats
for (i = 0; i < numselectSeats; i++) {
    customer[j].selectedSeats[i][0] = selectSeats[i][0];
    customer[j].selectedSeats[i][1] = selectSeats[i][1];
}
customer[j].numSelectedSeats = numselectSeats;
	system("cls");
		printf("*****************************************************************************");
		printf("\n                            Food & Beverages                                 ");
		printf("\n*****************************************************************************");
		printf("\n1 .Signature Popcorn Combo   ------------RM18.00");
		printf("\n2 .Royale Popcorn Combo      ------------RM21.00");
		printf("\n3 .Golden Horn Chips Combo   ------------RM18.00");
		printf("\n4 .Popcorn Ala Carte         ------------RM14.00");
		printf("\n5 .Chicken Nuggets           ------------RM16.00");
		printf("\n6 .Signature Hotdog          ------------RM15.00");
		printf("\n7 .Mineral Water             ------------RM4.00");
		printf("\n8 .Soft Drink                ------------RM6.00");
		printf("\n9 .Latte Coffee              ------------RM11.00");
		printf("\n10.Super Ring                ------------RM6.30");
		printf("\n============================================================================");
		printf("\nNeed Food & Beverage [Y/N]:");
		scanf(" %c",&choice);
		if(choice=='y'||choice=='Y'){
		 
			printf("Enter food number     : ");
			scanf("%d",&foodnum);
	
		switch (foodnum)
		{
		case 1 :strcpy(foodname,"Signature Popcorn Combo");
				foodprice =18.00;
				break;
		case 2 :strcpy(foodname,"Royale Popcorn Combo");
				foodprice=21.00;
				break;
		case 3 :strcpy(foodname,"Golden Horn Chips Combo");
				foodprice=18.00;
				break;
	    case 4 :strcpy(foodname,"Popcorn Ala Carte");
				foodprice=14.00;
				break;
		case 5 :strcpy(foodname,"Chicken Nuggets");
				foodprice=16.00;
				break;
		case 6 :strcpy(foodname,"Signature Hotdog");
				foodprice=15.00;
				break;
		case 7 :strcpy(foodname,"Mineral Water");
				foodprice=4.00;
		case 8 :strcpy(foodname,"Soft Drink");
				foodprice=6.00;
				break;
		case 9 :strcpy(foodname,"Latte Coffee");
				foodprice=11.00;
				break;
		case 10:strcpy(foodname,"Super Ring");
				foodprice=6.30;
				break;
		default :strcpy(foodname,"None"); 
				foodprice=0.00;  
		}
		
		}
		else if (choice=='n'||choice=='N'){ 
		strcpy(foodname,"None"); 
		foodprice=0.00;  
		}    
		
		tadult=adultprice*adult;
		tchildren=schildprice*kid;
		tsenior=schildprice*senior;    
		
		printf("Do you have vouncher code? [Y/N]:");  
		scanf(" %c",&ch);  
		switch(ch){   
		
		case 'y': case 'Y':   
		printf("Please key in your discount code just now:");  
		scanf("%s",&dis);     
		
		if(strcmp(dis,discount_code)==0)
		{  total=tadult+tchildren+tsenior+*fp-5;} 
		else if(strcmp(dis,discount_code)>0||strcmp(dis,discount_code)<0){
		
		total=tadult+tchildren+tsenior+*fp;}

		break;  
		
		
		}
		system("cls");
		printf("\n------------------------------------------------");
		printf("\n                   RECIEPT                      ");
		printf("\n------------------------------------------------");
		printf("\nName                     :%s",customer[j].name);
		printf("\nPhone Mobile             :%s",customer[j].mobile);
		printf("\nMovie&Time               :%s",moviename);
		printf("\n%d Adult                  :RM%.2f",adult,tadult);
		printf("\n%d Children               :RM%.2f",kid,tchildren);
		printf("\n%d Senior/OKU             :RM%.2f",senior,tsenior);
		printf("\nSeat Number              :");
for (i = 0; i < customer[j].numSelectedSeats; i++) {
    printf("%d ROW %d COLS, ", customer[j].selectedSeats[i][0], customer[j].selectedSeats[i][1]);}  
		printf("\nFood Selected		 : %s     RM%.2f",foodname,*fp); 
		if(strcmp(dis,discount_code)==0){  
		total=tadult+tchildren+tsenior+*fp-5;
		printf("\nDiscounted               :RM5.00");    
		printf("\nTotal                    :RM%.2f",total);       
		} else { total=tadult+tchildren+tsenior+*fp;
		printf("\nTotal                    :RM%.2f\n\n",total);   
		}
		system("pause");
		
	 payment();
	 
	 sleep(4); 
	 system("cls");
		printf("\n------------------------------------------------");
		printf("\n                   RECIEPT   (PAID)                  ");
		printf("\n------------------------------------------------");
		printf("\nName                     :%s",customer[j].name);
		printf("\nPhone Mobile             :%s",customer[j].mobile);
		printf("\nMovie&Time               :%s",moviename);
		printf("\n%d Adult                  :RM%.2f",adult,tadult);
		printf("\n%d Children               :RM%.2f",kid,tchildren);
		printf("\n%d Senior/OKU             :RM%.2f",senior,tsenior);
		printf("\nSeat Number              :");
for (i = 0; i < customer[j].numSelectedSeats; i++) {
    printf("%d ROW %d COLS, ", customer[j].selectedSeats[i][0], customer[j].selectedSeats[i][1]);}  
		printf("\nFood Selected		 : %s     RM%.2f",foodname,*fp); 
		if(strcmp(dis,discount_code)==0){  
		printf("\nDiscounted               :RM5.00");    
		printf("\nTotal                    :RM%.2f\n\n",total);       
		}total=tadult+tchildren+tsenior+*fp;
		printf("\nTotal                    :RM%.2f\n\n",total);   
		
		system("pause");
} 



void selectSeat() {
    int row, col;

    printf("Enter ROW AND COLS(1 1),Enter 0 0 to End:");
    scanf("%d %d", &row, &col);

    if (row == 0 && col == 0) {
        printf("END SELECT\n");
        return;
    }

    if (row < 1 || row > ROWS || col < 1 || col > COLS) {
        printf("INVALID SEAT NUMBER ,PLEASE RESELECT\n");
        selectSeat();
        return;
    }

    if (seats[row - 1][col - 1] == 'X') {
        printf("PLACE HAVE BE SELECTED,PLEASE RESELECT\n");
        selectSeat();
        return;
    }

    seats[row - 1][col - 1] = 'X';

    selectSeats[numselectSeats][0] = row;
    selectSeats[numselectSeats][1] = col;
    numselectSeats++;

    printf("\nPLACE SELECT SUCCESSFUL: %dROW %dCOLS\n", row, col);
}  

void displaySelectedSeats() {
    int a; 
    printf("Selected Seat:\n");
    for (a = 0; a < numselectSeats; a++) {
        printf("%d ROW %d COLS\n", selectSeats[a][0], selectSeats[a][1]);
    }
}

void displaySeats() 
{
    int a, b; 
    printf("  1 2 3 4 5\n");
    for (a = 0; a < ROWS; a++) {
        printf("%d ", a + 1);
        for (b = 0; b < COLS; b++) {
            printf("%c ", seats[a][b]);
        }
        printf("\n");
    }
}
void Seatshows(){
	int a,b; 
	
	for(a=0;a<ROWS;a++)
	{
		for(b=0;b<COLS;b++)
		{
			seats[a][b]='0';
		}
	}
}

void payment(){  
int type_pay,pay;
	fflush(stdin);
		system("cls");
		puts("\t\tPlease make a payment");  
		puts("\n\t\tMethod 1: Online payment");  
		puts("\n\t\tMethod 2: Offline payment(not available)");   
		printf("\t\tEnter your choice:");
		scanf("%d",&pay);  
		
		switch (pay){  
		case 1:  
		printf("\t\tPlease select \n\t\t1.credit\n\t\t2.debit\n\t\t3.e-wallet\n\n ");  
		printf("\t\tPlease enter:");
		scanf("%d",&type_pay);
		if(type_pay==1||type_pay==2||type_pay==3){  
		int x;  
		char pending[]={"Pending...."};
		printf("\n\n\t\t\t\t");
		for(x=0;x<11;x++){  
		sleep(2);
		printf("%c",pending[x]);  
		}
		sleep(4);  
		puts("\n\n\t\t\tPayment sucessfully"); 	}
		break;  
		
		default: 
		puts("Due to technical issue,therefore system a not available now"); 
		puts("Payment not sucessfully");
		puts("Have good day and bye bye");  
		exit(0);
		break;
}
}











