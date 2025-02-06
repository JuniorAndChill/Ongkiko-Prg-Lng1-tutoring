/*2. OO Point-of-Sale

Write an app using OO methodology to calculate amount due for Food-to-Go restaurant. 
Food-to-Go sells chicken sandwiches, chips, and drinks. Include a method in your class 
definition calculateAmountdue() to calculate for the total amount due.

Menu
Sandwiches
Chicken Sandwich ($5)	Hotdog ($4)	Pretzel ($3)

Chips
Potato chips ($0.75)	Nachos ($3.50)		Popcorn ($2.50)

Drinks
Soda ($2)	Lemonade ($1.50)	Water ($1)

Example input/output
Enter your selections (select 0 if not ordering)
Enter sandwich selection: hotdog
How many: 2
Enter chip selection: Popcorn
How many:1
Enter drink selection: Soda
How many: 2

ITEMIZED
Sandwiches: $8
Chips: $2.50
Drinks: $4
TOTAL: $14.50

Example input/output
Enter your selections (select 0 if not ordering)
Enter sandwich selection: none
How many: 0
Enter chip selection: Nachos
How many:2
Enter drink selection: Water
How many: 3

ITEMIZED
Sandwiches: $0
Chips: $7.00
Drinks: $3
TOTAL: $10.00

Daniel Critchlow
*/
#include <iostream>
#include <iomanip> //automatically add this when I see we are doing money totals for decimal formatting
using namespace std;

/*Continuing with OOM, we make the class to be used by our program*/
class FoodToGo{
private: //list out all of our variables that we may use in our program.
    double sandwiches;
    double chkSando=5;//I can also set prices for items here
    double glizzy=4;
    double pretz=3;
    double sCount;
    double totalS;
    double chips;
    double pChip=.75;
    double libre=3.5;
    double popcorn=2.5;
    double cCount;
    double totalC;
    double drinks;
    double coke=2;
    double limon=1.5;
    double wataaa=1;
    double dCount;
    double totalD;
    double gTotal;

public:
    /*So remember in OOM you are trying to make everything organized and easy to
    manage. To accomplish that we split the menu categories and logics*/
    double orderSandwich(){
        cout<<fixed<<setprecision(2);//I need 2 decimal places in my display of money
        cout<<"\t\t~~~~Enter your selections!~~~~";
        cout<<"\n\n\t\t   Enter sandwich selection\n\t(1=Chicken sandwich|2=Hotdog|3=Pretzel|0=none): ";
        cin>>sandwiches;
        cout<<"\t\t\t How many: ";
        cin>>sCount;
        
        /*I wanted the logic to return the subtotal math in the desired format. 
        Otherwise the conversions were difficult to manage which isn't very OOM*/
        if(sandwiches == 1){
            totalS=(chkSando*1.00)*sCount;
        }
        else if (sandwiches == 2){
            totalS=(glizzy*1.00)*sCount;
        }
        else if (sandwiches == 3){
            totalS=(pretz*1.00)*sCount;
        }
        else{
            return 0.00;//This allows for skipping a category
        }
        return totalS;
    }
    double orderChips(){//same as above
        cout<<fixed<<setprecision(2);
        cout<<"\t\t     Enter chip selection\n\t  (1=Potato Chips|2=Nachos|3=Popcorn|0=none): ";
        cin>>chips;
        cout<<"\t\t\t How many: ";
        cin>>cCount;
        
        if(chips == 1){
            totalC=(pChip*1.00)*cCount;
        }
        else if (chips == 2){
            totalC=(libre*1.00)*cCount;
        }
        else if (chips == 3){
            totalC=(popcorn*1.00)*cCount;
        }
        else{
            return 0.00;
        }
        return totalC;
    }
    double orderDrinks(){//and the 3rd time
        cout<<fixed<<setprecision(2);
        cout<<"\t\t    Enter drink selection\n\t    (1=Soda|2=Lemonade|3=Water|0=none): ";
        cin>>drinks;
        cout<<"\t\t\t How many: ";
        cin>>dCount;
        
        if(drinks == 1){
            totalD=(coke*1.00)*dCount;
        }
        else if(drinks == 2){
            totalD=(limon*1.00)*dCount;
        }
        else if(drinks == 3){
            totalD=(wataaa*1.00)*dCount;
        }
        else{
            return 0.00;
        }
        return totalD;
    }
    //these are the fails which made logic kinda crazy ngl. Don't fall for these missteps
    /*void selection(){
        switch (sandwiches){
            case 1:
                sandwiches = chkSando;
            break;
            case 2:
                sandwiches = glizzy;
            break;
            case 3: 
                sandwiches = pretz;
            break;
        }
        switch (chips){
            case 1:
                chips = pChip;
            break;
            case 2:
                chips = libre;
            break;
            case 3:
                chips = popcorn;
            break;
        }
        switch (drinks){
            case 1:
                drinks = coke;
            break;
            case 2:
                drinks = limon;
            break;
            case 3:
                drinks = wataaa;
            break;
        }
    }*/
    /*double selection(){
        if(sandwiches == 1){
            sandwiches=chkSando;
            return sandwiches;
        }
        else if (sandwiches == 2){
            sandwiches=glizzy;
            return sandwiches;
        }
        else if (sandwiches == 3){
            sandwiches=pretz;
            return sandwiches;
        }
        else{
            sandwiches=0.00;
            return sandwiches;
        }
        if(chips == 1){
            chips=pChip;
            return chips;
        }
        else if (chips == 2){
            chips=libre;
            return chips;
        }
        else if (chips == 3){
            chips=popcorn;
            return chips;
        }
        else{
            chips=0.00;
            return chips;
        }
        if(drinks == 1){
            drinks=coke;
            return drinks;
        }
        else if(drinks == 2){
            drinks=limon;
            return drinks;
        }
        else if(drinks == 3){
            drinks=wataaa;
            return drinks;
        }
        else{
            drinks=0.00;
            return drinks;
        }
    }*/
   /*One of the requirments is to have a calculateAmountdue method.Since subtotals
   aren't what people are paying, you put the grand total here. Very OOM*/
    void calculateAmountdue(){
        cout<<fixed<<setprecision(2);
        gTotal=(0.00+totalS+totalC+totalD);
    }
    /*In the same fashion as all the times before, we format the desired look of the
    output and apply it to a method. The menu may change and you manage it in your
    I/O as well as add or drop methods in your class as needed. Much OOM*/
    void result(){
        cout<<fixed<<setprecision(2);
        cout<<"\t\t    ------>ITEMIZED<------"<<endl;
        cout<<"\t\t    "<<setw(13)<<left<<"Sandwiches: "<<"$"<<setw(15)<<left<<totalS<<endl;
        cout<<"\t\t    "<<setw(13)<<left<<"Chips: "<<"$"<<setw(15)<<left<<totalC<<endl;
        cout<<"\t\t    "<<setw(13)<<left<<"Drinks: "<<"$"<<setw(15)<<left<<totalD<<endl;
        cout<<"\t\t    "<<setw(13)<<left<<"TOTAL: "<<"$"<<setw(15)<<left<<gTotal<<endl;
    }
};

int main(){

FoodToGo customer;//We simply set our instance (child with inheritence) so we can call functions

customer.orderSandwich();
customer.orderChips();
customer.orderDrinks();
customer.calculateAmountdue();
//readability is a key factor of OOM....add dividers
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
customer.result();
return 0; //end program here. EZPZ
}