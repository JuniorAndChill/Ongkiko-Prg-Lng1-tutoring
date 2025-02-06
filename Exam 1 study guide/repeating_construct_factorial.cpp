/*04 Write your code, repeating constructs (15 pts)
Write a program that takes an input, an integer “num” and displays the numbers from 1 to num and also displays its sum and factorial.

 Sample I/O:

Enter number: 9
1 2 3 4 5 6 7 8 9 sum: 45 factorial: 362880

Enter number 5:
1 2 3 4 5 sum: 15 factorial: 120
*/

#include <iostream>
using namespace std;
 
int main ()
{
int user_input=0;
int sum=0;
int fact=1;

cout<<"Enter a number: ";
cin>>user_input;

for(int i=1;i<=user_input;i++){
    cout<<i<<" ";
    sum+=i;
    fact*=i;
}
cout<<"Sum= "<<sum<<" Factorial= "<<fact;

return 0;
}