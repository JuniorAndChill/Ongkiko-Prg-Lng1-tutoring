/*5. Parking
A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage charges an additional $0.50 per
hour for each hour or part thereof in excess of three hours. The maximum charge for any given 24-hour period is $10.00.
Assume that no car parks for longer than 24 hours at a time. Write an app that calculates and displays the parking charges
for each customer who parked in the garage yesterday. You should enter the hours parked for each customer.
The app should display the charge for the current customer and should calculate and display the running total of
yesterday’s receipts. The app should use function CalculateCharges() to determine the charge for each customer.
Daniel Critchlow*/

/* ~~The Psudo Code (Plain English to code step)~~
This program takes input from the user (0-24) for the amount of hours parked. The program has a function CalculateCharges(),
which does the calculations for the billing. It starts off by setting $2 min - $10 max fee. The function returns 'fee' for
the 'main' section of the program. This program will use 'setprecision()' to ensure the total looks like a standard price.
*/
#include <iostream>
#include <iomanip>//we need this to make the 2 decimal point float in the total
using namespace std;

//the deliverable. This is set as double because it's more precise. It does the simple math with nested 'if' loops for 
//validation of the min/max. Validation is just, "did this thing we are looking for happen?"
double CalculateCharges(double hours){//setting the input for the function as the hours the user enters
    double fee=2.00;//min fee up to 3 hours
    
    if (hours >3){//initial 'if' checks if the below 3hr mark is what occured. I say below because if it's below it ends at $2
        fee+=0.50*(hours-3);//when it meets the "above 3hr" condition there is some math for how much
        if (fee>10.00){//second 'if' is for making sure customer doesn't pay over $10 since that's max
            fee=10.00;//when it exceeds the max fee amount, the fee is assigned $10. Basically overriding calculation
        }
    }
    return fee;//since I want to use the result for something later I have it update the 'fee' variable and we can call that 
}              //in 'main' and produce a result at that moment 

int main ()
{
    double hours, fee, total=0.0; //INITIALIZE! (math gets weird when you forget to reset. Think about a stopwatch)
    cout<<fixed<<setprecision(2); //here we set our format of 2 decimal float(float= how many digits after decimal)
    
    cout<<"Enter hours parked: ";//simple prompt for the user to know what's going on. Add ":" and space for readability
    cin>>hours;//store the response in 'hours' to call it next
    fee=CalculateCharges(hours);//we take the function above and "compare"(aka have it do the math) it to our 'hours' input 
    total+=fee;//'+=' is an operator to "add to" the value of 'total'. This sets our total
    cout<<"Your total is: $"<<total; //we simply call total at the end of our output
return 0;//we return 0 cuz there should be no error and the program is done
}