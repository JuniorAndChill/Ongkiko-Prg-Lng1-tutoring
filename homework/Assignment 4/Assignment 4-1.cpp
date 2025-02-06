/*1. OO Heart rate

While exercising, you can use a heart-rate monitor to see that your heart rate 
stays within a safe range suggested by trainers and doctors. According to AHA, 
the formula for calculating your maximum heart rate is in beats per minute is 
220 minus age in years. Your target heart rate is a range that is 50% - 85% of 
your maximum heart rate. Create a class called HeartRates.  The class attributes 
should include person’s name, year of birth, and the current year.  The class 
should also include methods that calculates and returns person’s age, maximum 
heart rate and minimum and maximum target heart rates.  The app prompts for the 
person’s information (name, year of birth, current year) and then display the 
person’s age, maximum heart rate, and target heart rate range.

Example input/output
name: Maria
year of birth: 1972 
current year: 2020

Age: 48
Max heart rate: 172
Target heart rate: 86 to 146

Daniel Critchlow
*/
#include <iostream>
using namespace std;

/*because this problem requires OO methodology, we will make our 
class/variables/methods first. We do this to make program maintenance easier as 
well as more organized. The idea is to be able to add/drop methods that may be 
applicable*/
class HeartRate{
private:
    string name;
    int bYear; //birth year
    int cYear; //current year
    int age;
    int mHR; //max target
    int tHR1; //min target
    int tHR2; //max target

public:
    /*for simplifying I/O I create this prompt that can be edited later if needed*/
    void display(){
    cout<<"Enter your name: ";
    cin>>name;
    cout << "Enter birth year: ";
    cin>>bYear;
    cout<<"Enter current year: ";
    cin>>cYear;
    }
    /*We can do all of our calculations here to get the correct data since it's not
    too complicated. If the functions get too complex break them up into intuitive 
    sections to make it more manageable*/
    void HRcalc(){
        age=(cYear - bYear);
        mHR=(220-age);
        tHR1=(mHR*.5);
        tHR2=(mHR*.85);
    }
    /*Since we were given an expected output format it makes sense to make this method.
    If it's later necessary, we can edit it to match the flavor of the time.*/
    void result(){
    cout<<"Hello, "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Max heart rate: "<<mHR<<endl;
    cout<<"Target heart rate: "<<tHR1<<" to "<<tHR2<<endl; 
    }
};
int main(){

HeartRate HR; //We simply set our instance (child with inheritence) so we can call functions

HR.display();//because there were no parameters, we don't place any in the parenthese
HR.HRcalc();
HR.result();
return 0; //return 0 for end of program and no expected errors
}