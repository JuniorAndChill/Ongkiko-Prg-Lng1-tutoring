/*03  Write your code, conditional construct (10 pts)
Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
•	Equilateral triangle: An equilateral triangle is a triangle in which all length values of three sides are equal.
•	Isosceles triangle: An isosceles triangle is a triangle that has two sides of equal length.
•	Scalene triangle: A scalene triangle is a triangle that has three unequal sides length.

 
Sample I/O:

Enter side 1 length: 40
Enter side 2 length: 50
Enter side 3 length: 40
Type: isosceles

Enter side 1 length: 33
Enter side 2 length: 55
Enter side 3 length: 44
Type: scalene

Enter side 1 length: 16
Enter side 2 length: 16
Enter side 3 length: 16
Type: equilateral
*/

#include <iostream>
using namespace std;
 
int main ()
{
int side1; int side2; int side3;
cout<<"Input 1st side: ";cin>>side1;
cout<<"Input 2nd side: ";cin>>side2;
cout<<"Input 3rd side: ";cin>>side3;

if (side1 == side2 && side1 == side3)
    cout<<"The triangle is equalateral";
else if (side1 != side2 && side1  != side3 && side2 != side3)
    cout<<"The triangle is scalene";
else
    cout<<"The triangle is isosceles";
return 0;
}