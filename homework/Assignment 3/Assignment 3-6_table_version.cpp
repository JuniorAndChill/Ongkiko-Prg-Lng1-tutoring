/*6. Right Hypotenuse
Write function Hypotenuse that calculates the length of the hypotenuse of a right triangle when the lengths of the other
two sides are given. The function should take two arguments of type double and return the hypotenuse as a double.
Incorporate this method into an app that reads values for side1 and side2 and performs the calculation with the
Hypotenuse() function. Determine the length of the hypotenuse for each of the triangles using this sample input values.
Daniel Critchlow*/

/* ~~The Psudo Code (Plain English to code step)~~
This program uses the provided table to calculate hypotenuse. It uses a struct to format and a class to add table values
and to perform the math. The program uses <iomanip> to format the table and to set the float to 2 decimal places.
Since the question didn't specify that the user can do inputs, this may be the more correct version of this program.
*/
#include <iostream>
#include <cmath>//EZ maths for hypotenuse
#include <iomanip>//formatting is user friendly so we use this
using namespace std;

struct HTable{//for table building purposes I create a struct and name the 2 double values (deliverable)
    double side1;
    double side2;
};//always add ';' at the end of the curley brace in a struct or class

class Triangle{//to add functions I make this class simply called triangle
public://you have to at least set this perm or it will break the class and program will fail
    void addSide(const double side1, const double side2){//this is the function to add values to the HTable
        triangle[numTriangle++] = {side1, side2};//numTriangle is to keep track of how many lines are in the table
    }
    
    double Hypotenuse(const HTable& t){//this is the hypotenuse function (deliverable)
        return hypotf(t.side1, t.side2);//you can simply do math on the return value since it's grabbing from HTable
    }
    HTable triangle[10];//you know we gotta set our initial container size
    int numTriangle=0;//INITIALIZE!!!!
};//don't forget the ';'

int main ()
{ 
Triangle triangle;//we declare the object 'triangle' of the class 'Triangle'. Lower case one is the child and upper
                  //case is the parent class. You can create many child classes and use the setup of the parent class.
                  //Doing this will allow you to use the whole thing as a template. Think forms and how you can add to
                  //them but you always keep the original on hand for the next use.

    //here is how we add the table info that was requested. We get to skip input loops...YAY!!
    triangle.addSide(3.0, 4.0);//we use that child class to form our inputs
    triangle.addSide(5.0, 12.0);//see. Many child classes and none affect the original data since they create new
    triangle.addSide(8.0, 15.0);//classes based on the parent class. Really helpful for databases in all languages
    
    cout<<"~The Hypotenuse of Triangles~"<<endl;//love good clean formatting so consider developing your style
    cout<<"------------------------------"<<endl;//linebreaks. Love em!
    cout<<"Side1\tSide2\t   Hypotenuse"<<endl;//adding '\t' or tab spacing plus some extra spaces for good measure
    cout<<fixed<<setprecision(2);//here is where we dial in our decimal places. it's saying the 'cout's "do this"
    for(int i=0; i<triangle.numTriangle;i++){//of course we have an array so 'for' loops to unpack it
        double total=triangle.Hypotenuse(triangle.triangle[i]);//i have to give direct routing since I'm referencing
        cout<<triangle.triangle[i].side1<<"\t"<<triangle.triangle[i].side2<<"\t=  "<<total<<endl; //info out from main
        }
}//one of the few times we skip "return 0" because it's pointless in this type of program and would actually error out