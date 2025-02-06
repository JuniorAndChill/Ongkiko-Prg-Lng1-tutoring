#include <iostream>
#include <stack> // think stack of trays. This takes in data and places it on top of previous data.
                 // When calling the data it alwasys has to take from the top of the stack 1st (Last in, First Out or LIFO)

using namespace std;

int main(){
    
    stack<int>grades; // When calling the method "stack", you set the data type in the <> and then place the name after the type
    
    grades.push(99); // each time you want to call the stack you put the "[name].[function]"
    grades.push(100); // use the function "push" to add to the stack. This also increases the container size by 1
    grades.push(77);
    
    cout<<"Has: "<<grades.size(); // we use size to identify the amount of elements/data in your stack
    cout<<endl;
    cout<<grades.top(); // using the function "top" we can display the top of the stack
    grades.pop(); // use the function "pop" to remove from the top of the stack(most recent). This also decreses the container size by 1
    cout<<endl;   // you could also cout the pop command to show what is actually being removed when it's getting removed
    cout<<"Has: "<<grades.size(); // verifying that the command worked
    cout<<endl;
    cout<<grades.top();
    grades.pop();
    cout<<endl;
    cout<<"Has: "<<grades.size();
    cout<<endl;
    cout<<grades.top();
    grades.pop();
    cout<<endl;
    cout<<"Has: "<<grades.size();
    // most of these can combined to remove and show immediately in a cout but this is done this way to be more readable for you
    
    return 0;
}