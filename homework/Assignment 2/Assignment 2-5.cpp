/*5. All numbers
Write a program that checks if an input string contains letters, both lower and upper case.  For example:
Enter your string: 123A456b
Contain letters – Ab
Enter your string: 987654J99bk12
Contain letters – Jbk
Enter your string: 135790246
Yes, all numbers.
*/
//Daniel Critchlow Jr
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input; //I use string here since thats the type of input that is asked for
    string letters;
    bool has_upper = false; //The most helpful variable type here is bool. Bool is a true or false. You initialize it by setting false usually.
    bool has_lower = false; //The point of these is to help with checking between different types of data

    cout << "Enter a string: "; 
    cin>>input; 
    for(char c: input){ //this is a bit of a different way to search vs arrays. we can call characters "c" here and have it look through the variable "input" which I named it here. It'll look through each piece of data to find letters.
        if(isupper(c)){ //the condition of the search we use to identify is "isupper" which checks if data is upper case letters or not
            has_upper= true; //if in the string there's an upper case letter it'll change the bool to true
            letters+= c; //I'm using this to keep track of the letters and add them to "letters" so we can display them latter on
        } if (islower(c)){ //Same as before but for the lower case
            has_lower= true;
            letters +=c;
        }
    }
    if (has_upper ||has_lower) { //I'm using this "if loop" to find either of the bool values to "= true". Remember when looking at bool, just saying the name of the variable means "if has_upper =true, then do this"
        cout << "Here are the letters." << endl;
        cout << "Letters: " << letters << endl; //Whatever letters were found will be displayed from this cout
    } else {
        cout << "It's just numbers." << endl; //if none of the bool values change to true then this will mean all are "false" and that it's just numbers
    }
    return 0;
}