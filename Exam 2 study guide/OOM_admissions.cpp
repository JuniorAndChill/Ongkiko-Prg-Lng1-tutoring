/*•Class
    properties: DATscore, scienceGPA, commservHours, overallGPA
    method: DentalAdmissions() -> output -> Yes or No
  •Admissions criteria
    Dental Admission Test (DAT) score should be greater than or equal to 20.
    Science GPA should be greater than or equal to 3.75.
    Have more than 40 hours of volunteer work/community service.
    Overall GPA minimum of 3.5
Example input/output:
Enter DAT score: 22
Enter Science GPA: 3.71
Enter Community service hours: 80
Overall GPA: 3.8
ADMISSION STATUS: No

Example input/output:
Enter DAT score: 20
Enter Science GPA: 3.75
Enter Community service hours: 41
Overall GPA: 3.52
ADMISSION STATUS: Yes

Daniel Critchlow Jr*/

#include <iostream>
using namespace std;

class DentalAdmissions{
    private:
        double DATscore;
        double SciGPA;
        double CSHours;
        double OGPA;    
    public:
/*To make this have the least amount of logic conflicts we put this into a larget nested loop. It doesn't
make sense to keep asking questions when they won't be admitted anyway so it will display a fail at any
applicable check in the loop. A bool can be useful if there was a need for follow on status checking.*/
        void Admission() {
            cout << "Enter DAT score: ";
            cin >> DATscore;
            if (DATscore >= 20.00){
                cout << "Enter Science GPA: ";
                cin >> SciGPA;
                    if(SciGPA >= 3.75){
                        cout << "Enter Community service hours: ";
                        cin >> CSHours;
                            if (CSHours >= 40.00) {
                                cout << "Enter Overall GPA: ";
                                cin >> OGPA;
                                if (OGPA >= 3.50) {
                                    cout<<"ADMISSION STATUS: Yes";
                                }
                                else{
                                    cout<<"ADMISSION STATUS: No";
                                }
                            }
                            else{
                                cout<<"ADMISSION STATUS: No";
                            }
                    }
                    else{
                        cout<<"ADMISSION STATUS: No";
                    }
            }
            else{
                cout<<"ADMISSION STATUS: No";
            }
        }
};

int main() {
DentalAdmissions status; //simple calling of method
status.Admission(); //simply need the single method to do all possibilities 
}