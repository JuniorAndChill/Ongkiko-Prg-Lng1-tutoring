/*1. Stock Mapping
Write an app that keeps stock data in a collection data structure implemented as key/value pair . The class should
be able to retrieve a particular stock name by searching on its stock symbol.
Daniel Critchlow*/

/* ~~The Psudo Code (Plain English to code step)~~
This program will create a small stock database and allow the user to do a 4-digit stock symbol. It will then search
the database and find the stock name. The program has an 'if' loop to verify the stock is in there or tell the user
that it can't find the stock. The program uses struct and class to format/build the table and the class has an
unpacking method to show the user a result after the input they give.
*/
#include <iostream>
#include <string>
using namespace std;

//we start this by making a structure to be our container
struct Stock{
    string symbol;//the things we care about mainly is just the symbol and the name
    string name;
};//to end a struct you have to put a semicolon at the end of a curly brace

//we make a class so we can define the format of the data, define it's function, and define the properties
class StockData{//stock data sounds like a good way to name this class
public: //the options are private, public, or protected. This defines the access for the data set
    void addStock( const string symbol, const string name){ //this line is where we define the variables we will use
        stocks[numStocks++] = {symbol, name}; //here is where we place our methods to access data members
    }
    
    string getStockName(const string symbol){//define variables
        for(int i=0;i<numStocks;i++){//method to access data, for loop to do it multiple times
            if (stocks[i].symbol == symbol){//if statement to qualify the matches
                return stocks[i].name;//adjust a return. Because it's a method we should have a return for the work
            }                         //since we want the user to put symbol and get a name back this is the format
        }
        return "Stock Not Found"; //just incase the stock doesn't exist in this container we let the user know
    }

 //since we don't want users to access this outside the 'private group' we set it to private.
private://This line isn't necessary but here's and example of deploying a 'private group' permission
    Stock stocks[1000]; //you know we gotta set our initial container size. This is necessary
    int numStocks=0; //INITIALIZE!!!!
};//to end a class you have to actually put a semicolon at the end of the curly brace

int main ()
{
 StockData stockData;//we declare and object 'stockData' of the class 'StockData'. Lower case one is the child and upper
                     //case is the parent class. You can create many child classes and use the setup of the parent class.
                     //Doing this will allow you to use the whole thing as a template. Think forms and how you can add to
                     //them but you always keep the original on hand for the next use.
    
    //just so this works and we don't have to add some I/O loops, let's add some easy data
    stockData.addStock("AAPL", "Apple Inc."); //remember how above we declared the object in this way. Use it here
    stockData.addStock("GOOGL", "Alphabet Inc.");//don't forget that you add the strings using quotation marks
    stockData.addStock("MSFT", "Microsoft Corporation");//also find your own stocks cuz these are like the default AI examples
    
    string symbol;//here we make sure to set our variable for out I/O (Cin/cout = I/O=input/output...fYI)
    cout<<"Enter a stock symbol: "; cin>>symbol; //keep it simple! You can be extra later if you want
    string name = stockData.getStockName(symbol);//here we set our variable for name. It's going to equal the return
    cout<< "Stock name: "<<name<<endl;//viola! We have stock name output. you can add fields in the struct
                                      //if you wanted to or needed to. But this is an easy example of how to do this
return 0;//we return 0 cuz there should be no error and the program is done
}