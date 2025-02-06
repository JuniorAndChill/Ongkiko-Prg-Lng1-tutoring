/*Functional Distance (20 pts), C++
Complete the function definition (Distance) for a module that calculates the distance between two points. 
Use the formula below for the calculation of distance.

Example input/output:

Enter Point 1 coordinate: 4 5
Enter Point 2 coordinate: 7 11
Distance: 6.71*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double distance() {
    double x1;
    double y1;
    double x2;
    double y2;
    cout << "Enter point 1 coordinate: ";
    cin >> x1 >> y1;
    cout << "Enter point 2 coordinate: ";
    cin >> x2 >> y2;
    cout<<"Distance: ";
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    cout<<fixed<<setprecision(2);
    cout <<distance() << endl;
    return 0;
}