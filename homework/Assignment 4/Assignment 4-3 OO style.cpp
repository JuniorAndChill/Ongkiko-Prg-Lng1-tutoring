/*3. Recursive Multiplication

Write a recursive function that accepts two arguments into the parameters  and . The function should return the value of  times .
Remember, multiplication can be performed as repeated addition as follows:
	7 x 4	-> 	7 + 7 + 7 + 7	or	4 + 4 + 4 + 4 + 4 + 4 + 4
Daniel Critchlow
*/
#include <iostream>
using namespace std;

class RMulti{
    private: //let's list out or necessary variables that all the methods can grab from
    int x;
    int y;
    public:
        void display(){ //place our I/O here for easy manipulation later on.
            cout<<"Give me number: ";
            cin>>x;
            cout<<"Give me number: ";
            cin>>y;
        }
        /*since I don't need a certain data type we put 'void' instead of something like 'int'/'double'/'string'/etc*/
        void multiply(){
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
}; //remember when making classes you need to add ';' after the last '}'

int main ()
{
    RMulti rmulti; //We simply set our instance (child with inheritence) so we can call functions
    rmulti.display();
    rmulti.multiply();/*because we set up our class we can run this without using parameters in this case. It's all contained*/
    return 0; //end program here. EZPZ
}