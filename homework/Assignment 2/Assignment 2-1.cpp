/* |1. 70 and lower| Write a program that accepts at least 8 integer test scores from the user and
stores them in an array. The app should display how many of the scores were lower than 70.
Input validation: Do not accept scores less than 0 or greater than 100.
Example:
Enter numbers: 71 80 66 65 50 100 91 49
Lower than 70: 4*/

//Daniel Critchlow Jr
#include <iostream>
#include <string>
using namespace std;

int main(){
    const int numScores = 8; // Minimum number of scores that you can change at any time
    int scores[numScores]; //This is calling your constant so you don't have to adjust your number in the code itself
    int below70 = 0; //always remember to "initialize"! This sets the count to 0 because on default you haven't counted anything before the program runs

    cout<<"Enter "<<numScores<<" test scores (0-100): "; //The "numScores" part will update alongside your constant that you change up top

    //Now we create the "for" loop that will populate the your "scores" array. The "cin" is here to allow you to validate the inputs
    for (int i = 0; i < numScores; i++) {
        cin >> scores[i];
        // Input validation loop. It will be inide the "for" loop and will repeat the input option until 8 valid inputs are made

        while (scores[i] < 0 || scores[i] > 100) {
            cout << "Invalid score. Please enter a number between 0 and 100: ";
            cin >> scores[i];
        }

        // Count scores below 70
        if (scores[i] < 70) {
            below70++;
        }
    }

    cout<<"Scores lower than 70%: "<<below70<<endl; //displays the amount of scores that are below 70
        for (int i = 0; i < numScores; i++) {
            cout<<scores[i]<<"% |";}
    return 0;
}