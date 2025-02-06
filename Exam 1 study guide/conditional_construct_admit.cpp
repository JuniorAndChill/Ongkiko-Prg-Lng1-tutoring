/*02 Write your code, conditional construct (10 pts)
Write an app to determine if a student can be accepted to a graduate MBA program based 
on marks/grades on specific courses (Adv Financial Mgt, Accounting III, Taxation).
Criteria for acceptance (all conditions must be satisfied)
•	All grades must be greater than 80
•	Accounting III must be greater than 85
•	Average of Accounting III and Taxation cannot be less than 90
Examples input/output:
•	Enter Adv Financial Mgt grade: 81
Enter Accounting III grade: 100
Enter  Taxation grade: 99
Result: Student accepted for admission.

•	Enter Adv Financial Mgt grade: 80
Enter Accounting III grade: 95
Enter  Taxation grade: 99
Result: Student not accepted for admission.

•	Enter Adv Financial Mgt grade: 86
Enter Accounting III grade: 90
Enter  Taxation grade: 90
Result: Student accepted for admission.

•	Enter Adv Financial Mgt grade: 100
Enter Accounting III grade: 84
Enter  Taxation grade: 100
Result: Student not accepted for admission.
*/

#include <iostream>
using namespace std;

int main()
{
bool acc85=false;
bool avg90=false;
bool above80=false;
int fin, acc, tax, total;

cout<<"What is your grade in Adv Financial Mgt?: ";
cin>>fin;
cout<<"What is your grade in Accounting III?: ";
cin>>acc;
cout<<"What is your grade in Taxation?: ";
cin>>tax;
    if(fin>80&&acc>80&&tax>80){
        above80=true;}
    else{
        cout<<"Result: Student not accepted for admission.";
    }
    if(acc>85){
        acc85=true;}
    else{
        cout<<"Result: Student not accepted for admission.";
    }
    total=(acc*tax)/2;
    if (total>89){
        avg90=true;}
    else{
        cout<<"Result: Student not accepted for admission.";
    }
    if(acc85&&avg90&&above80){
        cout<<"Result: Student accepted for admission.";}
return 0;
}