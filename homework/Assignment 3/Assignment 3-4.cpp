/*4. The following formula can be used to determine the distance an object falls due to gravity in a specific time period:
•	d = 1 ⁄ 2 gt2
The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the time in seconds that
the object has been falling. Write a function named fallingDistance() that accepts an object’s falling time (in seconds)
as an argument. The function should return the distance, in meters, that the object has fallen during that time interval.
Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments
and displays the return value.
Daniel Critchlow*/

/* ~~The Psudo Code (Plain English to code step)~~
This program will run without a user input. Using the fallingDistance() function the program works the math and with a
'for' loop the program will build out the table. The program does some light formatting using the 'tab' function.
*/
#include <iostream>
using namespace std;

//the deliverable asked for the specific function and we just do the math in it
double fallingDistance(double time){
    const double gravity=9.8;//gravity for earth doesn't change so we set it as 'const'
    return 0.5*gravity*time*time;//simply to return math results you can do the math in the return. When we call it
}                                //in main it'll spit out what we are looking for each time

int main ()
{
    cout<<"~~time(s)/distance(m)~~"<<endl;//these lines are some text formatting for the table header
    cout<<"------------------------"<<endl;
    for(int time=1; time<=10;time++){//do a 'for' loop to build out the table, modifying the range changes table size
        double distance = fallingDistance(time);//just call the function into the distance variable 
        cout<<time<<"\t\t= "<<distance<<endl;//'\t' is a tab space. decided to use 2 for looks
    }
return 0;//we return 0 cuz there should be no error and the program is done
}