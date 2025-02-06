#include <iostream>
#include <queue> //for this example we'll use the queue library. Allows us to "form a line" of data so to speak

using namespace std;

int main(){
    
    
    queue<string> cars; //the <> is how you set you variable or data type. after it you name the var
    
    cars.push("toyota"); //each one of these methods called will have a name in quotation marks to name the queue item and it with "push" it's adding it
    cars.push("ford");
    cars.push("honda");
    cars.push("subaru");
    cars.push("Chevy");
    
    cout<<"Has: "<<cars.size()<<" elements."<<endl; //use size to find how many elements are in your queue
    cout<<cars.front()<<endl; //"front" shows the 1st thing in the queue
    cout<<cars.back()<<endl; //"back" shows the last thing in the queue

    return 0;
    
}