/*4. Payroll array
The program that calculates the simple weekly payroll for up to 20 employees.
The app will prompt for employee name, hourly rate and number of hours worked.
It will then calculate for gross pay (hourly rate * number of hours worked),
withholding tax deduction (gross pay * 5%), social security deduction
(gross pay * 3%), and medicare deduction (gross pay * 1%).  Make sure to use
array data structure to store input values.  The payroll report will show the
calculation for each employee and the cumulative totals.
*/
//Daniel Critchlow Jr
#include <iostream>
#include <iomanip> //This is an input/output manipulator. This changes how inputs and outputs work in C++ for things like formatting and alignment
using namespace std;

const int MAX_EMPLOYEES = 20; //Here we set the max employee cap. We will reference this a few times

//We are using a structure or struct to show a data set. Pretty much we will be asking for these specific things and it will be easier later on to call them by their structure name vs recursively running the code
//This is all done before main so that it can be used repeatedly when needed. This will be used to fill our array. This is useful in various languages so REMEMBER THIS!!!!
struct Employee {
    //we are using string so we can take names as letters vs taking in the usual numbers
    string name;
    //we are using "double" as it holds a larger floating value (up to 15 digits). This should be enough to temporarily hold the math we are calculating
    double hourly_rate;
    double hours_worked;
    double gross_pay;
    double withholding_tax;
    double social_security_tax;
    double medicare_tax;
};

int main() {
    //We assign the values up here since things can change over time. If we really wanted to we can create a user input for these so that the users can update the rates without a developer. That's just extra
    float wTax=0.05;
    float social=0.03;
    float medicare=0.01;
    Employee employees[MAX_EMPLOYEES]; // "Employee" is calling the structure, "employees" is the id for these sections, "MAX_EMPLOYEES" is referencing our employee cap mentioned at the very top of the program
    int num_employees; //We are allowing the user to tell us how many times we are running the program and we set it here

    cout << "Enter the number of employees (up to 20): ";
    cin >> num_employees; //setting cycles of entries

    if (num_employees > MAX_EMPLOYEES) { //setting validation for max entries here
        cout << "Too many employees. Maximum is 20." << endl;
        return 1; //we use return 1 here to tell the program to start over at the previous/parent funtion. Otherwise the program would just finish not when you intend it to
    }
    //as usual, we are using a "for" loop to look into our array container. Always remember to use a "for" for each dimension that needs to be determined
    for (int i = 0; i < num_employees; i++) {
        cout << "\nEmployee " << i + 1 << endl; //"\n" is what we use to annotate a new line inside a "cout"
        cout << "Enter name: ";
        cin >> employees[i].name; //since we created a structure you can see we use "employees[i]" for the position of the "for" loop and ".name" for the particular element. Same with the ones that follow
        cout << "Enter hourly rate: ";
        cin >> employees[i].hourly_rate;
        cout << "Enter hours worked: ";
        cin >> employees[i].hours_worked;

        //This is where we do the math and assign it for the correct elements.
        employees[i].gross_pay = employees[i].hourly_rate * employees[i].hours_worked;
        employees[i].withholding_tax = employees[i].gross_pay * wTax;
        employees[i].social_security_tax = employees[i].gross_pay * social;
        employees[i].medicare_tax = employees[i].gross_pay * medicare;
    }
    
    //Now let us FORMAT the print statement for the user. This is what/how they will see it on their screen or printout
    cout << "\nPayroll Report:\n";
    //We use "setW" due to the <iomanip> library we are calling. This is for printing something out and you want to add spacing. "Left", "Right", "Internal" is the alignment in the "padding" or data boundary
    cout << setw(20) << left << "Employee Name" << setw(20) << left << "Hourly Rate" << setw(20) << left << "Hours Worked" << setw(20) << left << "Gross Pay" << 
    setw(20) << left << "Withholding Tax" << setw(20) << left << "Social Security" << setw(20) << left << "Medicare" << endl;
    cout << string(130, '-') << endl; //This is used to print (chosen amount) dashes 

    //INITIALIZE ALWAYS!!!! This is for our totals. Typically you wouldn't need to total out 
    double total_gross_pay = 0.0;
    double total_withholding_tax = 0.0;
    double total_social_security_tax = 0.0;
    double total_medicare_tax = 0.0;

    //This is how we print out the actual data from our array. Same as always we use "for" loops to access then printing it. 
    for (int i = 0; i < num_employees; i++) {
        cout << setw(20) << left << employees[i].name << setw(20) << left << fixed << setprecision(2) << employees[i].hourly_rate << setw(20) << left << fixed << 
        setprecision(2) << employees[i].hours_worked << setw(20) << left << fixed << setprecision(2) << employees[i].gross_pay << setw(20) << left << fixed << 
        setprecision(2) << employees[i].withholding_tax << setw(20) << left << fixed << setprecision(2) << employees[i].social_security_tax << setw(20) << left << 
        fixed << setprecision(2) << employees[i].medicare_tax << endl;

    //This is how we build out the totals
        total_gross_pay += employees[i].gross_pay;
        total_withholding_tax += employees[i].withholding_tax;
        total_social_security_tax += employees[i].social_security_tax;
        total_medicare_tax += employees[i].medicare_tax;
    }

    cout << string(130, '-') << endl;
    //We use "setprecision" to align decimal points in the output. Otherwise it'll be wonky and unaligned. Also to just keep format we can use the same "setw" across the board
    cout << setw(20) << left << "Total" << setw(20) << left << "" << setw(20) << left << "" << setw(20) << left << fixed << setprecision(2) << total_gross_pay << 
    setw(20) << left << fixed << setprecision(2) << total_withholding_tax << setw(20) << left << fixed << setprecision(2) << total_social_security_tax << 
    setw(20) << left << fixed << setprecision(2) << total_medicare_tax << endl;

    return 0;
}