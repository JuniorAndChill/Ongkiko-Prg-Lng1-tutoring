/* 3. Stat
{13, 11, 25, 9, 12, 5, 8, 3, 7}
Given the dataset above, write an app that will calculate its:
•	Mean (add all the numbers together then divide by the number of numbers)

•	Variance (It is calculated by taking the differences between each number 
              in the data set and the mean, squaring the differences to make
              them positive, and then dividing the sum of the squares by the 
              number of values in the data set)
              
•	Standard Deviation (Step 1: Find the mean.
                        Step 2: Subtract the mean from each score.
                        Step 3: Square each deviation.
                        Step 4: Add the squared deviations.
                        Step 5: Divide the sum by one less than the number of data points.
                        Step 6: Take the square root of the result from Step 5)
*/

//Daniel Critchlow Jr
#include <iostream>
#include <string>
#include <cmath> //It's a pain to program sqrt so I'll just grab the math module
using namespace std;

int main(){
    const int numStats = 9; // Minimum number of values that you can change at any time
    int stats[numStats]= {13, 11, 25, 9, 12, 5, 8, 3, 7}; //This is calling your constant so you don't have to adjust your number in the code itself
    float sd=0; //Initializing standard diviation
    
    //Now we create the "for" loop that will check the elements in your "stats" array.
    int sum=0;
    float mean=0;
    for (int i = 0; i < numStats; i++) {
        sum=sum+stats[i];
    mean=sum/numStats;
        
    }
    cout<<"The mean of all the elements in the array = "<<mean<<endl;
    // Now we find variance
    float var=0;
    for (int i=0;i<numStats;i++){
        var += (stats[i] - mean) * (stats[i] - mean);
    }
        var /= numStats;
    cout<<"The variance of all elements in the array = "<<var<<endl;
    // Now we find standard diviation
    sd=sqrt(var);
    cout<<"The standard diviation = "<<sd;
    return 0;
}