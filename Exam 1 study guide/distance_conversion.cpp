/*01 Write your code, basic operators (10 pts)
Write a distance unit conversion app. You will enter the value in miles and
your code will display the equivalent values in: meter, yard, chain.
•	1 mile  1,609 meters  1,760 yards  80 chains 
Example input/output:
Enter value in mile(s): 100
meters: 160900, yards: 176000, chains: 8000
*/
#include <iostream>
using namespace std;

int main()
{
int miles, meters, yards, chains;

miles=1;
meters=1609;
yards=1760;
chains=80;

cout<<"Give me miles: "<<endl;
cin>>miles;

cout<<"Meters: "<<miles*meters<<" | Yards: "<<miles*yards<<" | Chains: "<<miles*chains<<" |";
return 0;
}