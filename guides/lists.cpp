//Lists are a special sequence type of container that allows non-contiguous memory allocation (data that isn't connected)
//Not super important now but it's a slower way to handle data vs other methods
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> fruits = {"durian", "apple", "banana", "orange", "kiwi"};

    cout <<"->'For' loop print to unpack the 'list' container<-"<<endl;
    cout <<"| ";
    for (string fruit : fruits)
        cout << fruit << " | "; // you can add formatting in your prints for readability
                                // be nice to your users
    cout << endl;
    cout <<"\n->Printing out the 1st 'list' item<-"<<endl;
    cout << fruits.front() << endl;
    cout <<"\n->Printing out the last 'list' item<-"<<endl;
    cout << fruits.back() << endl;
    cout <<"\n->Using '.push_front' or '.push_back' we can add to the 'list' in the specified position<-"<<endl;
    fruits.push_front("grape");
    fruits.push_back("mango");
    cout <<"| ";
    for (string fruit : fruits)
        cout << fruit << " | ";
    
    cout <<"\n\n->Using '.pop_front' or 'pop_back', we can remove data from the 'list' in the specified position<-"<<endl;
    fruits.pop_front();
    fruits.pop_back();
    cout <<"| ";
    for (string fruit : fruits)
        cout << fruit << " | ";
    cout << endl;
    // all these commands don't necessarily need to be cout outputs. You can use it for condition checking or other functions

    cout <<"\n->Using '.size' you can find and display how many elements are in your 'list'<-"<<endl;
    cout <<"'fruits' size: "<<fruits.size() << endl;
    cout <<"\n->Using '.empty' you can find if your 'list' has data. If it shows '0' or false, then it isn't empty<-"<<endl;
    cout <<"Is 'fruits' empty: "<<fruits.empty() << endl;
    // another application of these would be to create an algorithm to create/delete containers to manage storage of data in
    // set groups. This may be something such as wanting to house data sets in batches like ticket sales for an event.
    // "when we logged 200 spots, create a new list" for example

    list<int> xList;
    cout <<"\n->Here we make an empty list to show that if '.empty' is true you get '1'<-"<<endl;
    cout <<"Is 'xlist' empty: "<< xList.empty() << endl;

    // trying to figure out what's newest to oldest from input? using the reverse function is a way to do that
    cout <<"\n->We can flip the 'list' order with '.reverse()'<-";
        cout << "\nfruits.reverse() : ";
    fruits.reverse();
    cout <<"| ";
    for (string fruit : fruits)
        cout << fruit << " | ";
    cout << endl;
    
    // need to make that guest list easier to navigate? using the sort function can help greatly with that
    cout <<"\n->We can sort (Alpha-numerically) the 'list' order with '.sort()'<-";
    cout << "\nfruits.sort(): ";
    fruits.sort();
    cout <<"| ";
    for (string fruit : fruits)
        cout << fruit << " | ";
    cout << endl;
    
    return 0;
}