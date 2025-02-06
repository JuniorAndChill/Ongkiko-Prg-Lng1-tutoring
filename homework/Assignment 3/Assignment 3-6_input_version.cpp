/*6. Right Hypotenuse
Write function Hypotenuse that calculates the length of the hypotenuse of a right triangle when the lengths of the other
two sides are given. The function should take two arguments of type double and return the hypotenuse as a double.
Incorporate this method into an app that reads values for side1 and side2 and performs the calculation with the
Hypotenuse() function. Determine the length of the hypotenuse for each of the triangles using this sample input values.
Daniel Critchlow*/

/* ~~The Psudo Code (Plain English to code step)~~
This program is an input based solution to the problem. It takes 2 inputs from user and calculates the hypotenuse
to the 4th decimal place. This program uses both cmath and iomanip to do the math function and to set formatting.
While this program gets the job done, the prompt never said the user inputs anything and mentioned a table. So this
may not meet the requirements. Probably should ask the professor.
*/
#include <iostream>
#include <cmath>//EZ maths for hypotenuse
#include <iomanip>//formatting is user friendly so we use this
using namespace std;

double Hypotenuse(double x, double y){//this is the hypotenuse function (deliverable)
    double total=hypotf(x, y);//hypotf give us the float we need
return total;//we return the results and call it in 'main' when we need it
}

int main ()
{ 
    double total=0.0, x=0.0, y=0.0;//INITIALIZE!!!!
    cout<<fixed<<setprecision(4);//here is where we set the decimal float(float=spaces after decimal)
    cout<<"Enter side1 (s1): ";//simple input for s1
    cin>>x;//store it in x or whatever you want to name it
    cout<<"Enter side2 (s2): ";//simple input for s2
    cin>>y;//you can name it something diff other than x/y but honestly why complicate it?
    total+=Hypotenuse(x,y);//'+=' is how we adjust the total value and get the result
    cout<<"The Hypotenuse of "<<x<<" and "<<y<<" is: "<<total;//Some nice formatting helps the user know what went down
return 0;//we return 0 cuz there should be no error and the program is done
}