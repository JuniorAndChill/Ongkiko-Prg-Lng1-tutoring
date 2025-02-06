/*3. Recursive Multiplication

Write a recursive function that accepts two arguments into the parameters  and . The function should return the value of  times .
Remember, multiplication can be performed as repeated addition as follows:
	7 x 4	-> 	7 + 7 + 7 + 7	or	4 + 4 + 4 + 4 + 4 + 4 + 4
Daniel Critchlow
*/
#include <iostream>
using namespace std;
/*since I don't need a certain data type we put 'void' instead of something like 'int'/'double'/'string'/etc*/
void multiply(int x, int y){
    cout<<x<<" x "<<y<<" ->"<<endl;
    for(int i=0; i<y;i++){
        cout<<x<<" ";
        if(i<y-1)/*This 'if' validation is to make sure whether you need to add a plus or not*/
            cout<<"+ ";
        }
/*this function will need 2 directions you will do 2 seperate loops to accomplish that and swap the range*/
    cout<<endl;
    for(int i=0; i<x;i++){
        cout<<y<<" ";
        if(i<x-1)
            cout<<"+ ";
        }
}

int main ()
{/*We just initilize our values here and do simple I/O statements.
I could have made the I/O into a method but it wasn't really necessary*/
    int x=0; int y=0;
    
    cout<<"Give me number: ";
    cin>>x;
    cout<<"Give me number: ";
    cin>>y;
    multiply(x,y);/*simply plug in your your parameters (the x and y in this case) and the program will run*/
}