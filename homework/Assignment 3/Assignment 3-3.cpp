/*3. Markup app
Write a program that asks the user to enter an item’s wholesale cost and its markup percentage.
It should then display the item’s retail price. For example:
•	If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00.
•	If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s retail price is 7.50.
The program should have a function named calculateRetail() that receives the wholesale cost and the markup 
percentage as arguments and returns the retail price of the item.
Daniel Critchlow*/

/* ~~The Psudo Code (Plain English to code step)~~
This program will ask the user for a wholesale (what they got it for) price and the markup % (how much they add
to make profit) This program will need the iomanip library because I want to format it like a typical store.
Since requested, this program will have a 'calculateRetail()' function above main to do the math. 
*/
#include <iostream>
#include <iomanip> //we want to format the print so it's not like 4+ decimal points float
using namespace std;

//here we make a function that was asked for to facilitate the math
double calculateRetail(double wholesaleCost, double markupPercentage) {//we use double because it's more precise
    double markupAmount = wholesaleCost * (markupPercentage / 100);
    double retailPrice = wholesaleCost + markupAmount;
    return retailPrice;//return the result so we can call it later
}

int main ()
{
    double wholesaleCost, markupPercentage;//set up the variables for the calculateRetail() function

    cout << "Enter the item's wholesale cost: ";//easy prompts
    cin >> wholesaleCost;//hold it here

    cout << "Enter the item's markup percentage: ";//more easy prompts
    cin >> markupPercentage;//hold more here

    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);//variables for totals

    /*we use 'fixed' to manipulate decimal points and 'setprecision(n)' is how many places
      if we didn't use 'fixed' it would change the total number print out size
      since it's retail 2 decimal places is standard for cents*/
    cout << "The item's retail price is: $" << fixed << setprecision(2) << retailPrice<< endl;
return 0;//we return 0 cuz there should be no error and the program is done
}