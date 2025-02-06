/*2. Word Set
Write an application that reads a line of input from the keyboard, and then displays each 
unique word that was entered, sorted in ascending order. You can do this parsing the line 
of input and adding each line to an appropriate Set-type data structure.
Daniel Critchlow*/

/* ~~The Psudo Code (Plain English to code step)~~
This program will ask for a user to enter some words. It will take each word and sort them
in a 'set' container. 'Set' is an ordered container so it's good here. Using a loop it will
unpack the words in ascending (A to Z)
*/
#include <iostream> //we got I/O
#include <string> //we got strings
#include <set> //we are using sets cuz they order things for you while throwing out non-uniques from the inputs
#include <sstream> //'stringstream' a cool class that allows you to 'parse'(analyze syntax by seperating) inputs in a stream
using namespace std;


int main ()
{
    string inputLine; //naming the user input variable
    cout<<"Enter as many words as you want seperated by spaces: "; //let's at least tell the user what we want and how
    getline(cin, inputLine); //use getline to extract and append till stream is ended. it'll store in the string object

    istringstream iss(inputLine); //this will unpack the stream till it ends
    set<string> uniqueWords; //this adds the string into the set to eliminate non-unique words since thats what is asked
    
    string word; //setting new variable for our output
    while (iss>>word){ //loop to split the string
        uniqueWords.insert(word); //we insert command the words from the set we made
    }
    
    for (const auto word : uniqueWords){ //alongside the while we make sure to only use the container of unique inputs
        cout<< word << endl;//putting the endl in the for loop will print each word on it's own line. Otherwise it clumps
    }
return 0;//we return 0 cuz there should be no error and the program is done
}