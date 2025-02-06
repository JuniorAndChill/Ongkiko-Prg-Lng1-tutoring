/*  Properties of Sets:
    
    Storing order – The set stores the elements in sorted order (it will sort alpha-numerically).
    
    Values Characteristics – All the elements in a set have unique values.
    
    Values Nature – The value of the element cannot be modified once it is added to the set, 
    though it is possible to remove and then add the modified value of that element. 
    Thus, the values are immutable (unchangable).
    
    Search Technique – Sets follow the Binary search tree implementation.
    
    Arranging order – The values in a set are unindexed (not assigned to a specific spot).*/

#include <iostream>
#include <set>

using namespace std;

int main(){
    
    set<string> fruits = {"apple", "banana", "orange", "grapes", "cherry", "banana", "orange"};
    // You'll see in the display of the data that there is only 1 banana because
    // only unique values are accepted. Using Multiset you can store multiple of
    // the same values
    cout<<"Has: "<<fruits.size()<<" non-repeating elements"<<endl;
    // using the function size typically shows you how elements are occupied with data
    for(string fruit: fruits)
        cout<<fruit<<" ";
    // one of the way sets is different from lists is sets sort automatically.
    // the output of the set will be in alpha-numeric order and it can be changed by
    // using the option 'greater'when calling the set i.e. "set<int, greater<int> >"
    return 0;
    
}