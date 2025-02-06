/* 2. Max and Min
Write a program that accepts at least 10 integer values from the user and displays the highest and lowest values.
Input validation: Do not accept scores less than 0 or greater than 100.
Example:
Enter numbers: 11 94 77 5 21 6 33 88 2 93
Highest: 94
Lowest: 5
*/

//Daniel Critchlow Jr
#include <iostream>
#include <string>
using namespace std;

int main(){
    const int numValues = 10; // Minimum number of values that you can change at any time
    int values[numValues]; //This is calling your constant so you don't have to adjust your number in the code itself

    cout<<"Enter "<<numValues<<" positive integers(0-100): "; //The "numValues" part will update alongside your constant that you change up top

    //Now we create the "for" loop that will populate the your "values" array. The "cin" is here to allow you to validate the inputs
    for (int i = 0; i < numValues; i++) {
        cin >> values[i];
        // Input validation loop. It will be inide the "for" loop and will repeat the input option until 10 valid inputs are made

        while (values[i] < 0 || values[i] > 100) {
            cout << "Invalid score. Please enter a number between 0 and 100: ";
            cin >> values[i];
        }
    }
    // Finding the biggest number
    int biggest=values[0];
    for (int i=0;i<numValues;i++){
        if (values[i]>biggest) //to change to smallest just flip the symbol
            biggest=values[i];
    }
    cout<<biggest<<" is the largest number in the array."<<endl;
    // Finding the smallest number
    int smallest=values[0];
    for (int i=0;i<numValues;i++){
        if (values[i]<smallest) //to change to biggest just flip the symbol
             smallest=values[i];
    }
    cout<<smallest<<" is the lowest number in the array."<<endl;
    for (int i = 0; i < numValues; i++) {
        cout<<values[i]<<" | ";}
    return 0;
}