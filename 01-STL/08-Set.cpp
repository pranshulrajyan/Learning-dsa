#include<iostream>
using namespace std;
#include<set>

void explainSet(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.emplace(2);
    s.insert(4);
    s.insert(5);
    // duplicate element will not be added to the set

    //traversing a set
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    // finding an element in set
    auto it = s.find(3);
    if(it!=s.end()){
        cout<<"Found: "<<*it<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    s.begin(); // returns an iterator to the first element in the set
    s.end(); // returns an iterator to the past-the-end element in the set
    s.size(); // returns the number of elements in the set
    s.empty(); // returns true if the set is empty, false otherwise
    s.erase(2); // removes the element with value 2 from the set
    s.clear(); // removes all elements from the set
    s.rbegin(); // returns a reverse iterator to the last element in the set
    s.rend(); // returns a reverse iterator to the past-the-end element in the set

    // Erasing an element using an iterator
    auto it2 = s.find(4); // finds the element with value 4 in the set and returns an iterator to it
    if(it2!=s.end()){
        s.erase(it2); // removes the element pointed to by the iterator it2 from the set
    }

    int cnt = s.count(5); // returns the number of elements with value 5 in the set (0 or 1 since it's a set)   
    
    auto it3 = s.lower_bound(3); // returns an iterator to the first element in the set that is not less than 3
    auto it4 = s.upper_bound(3); // returns an iterator to the first element in the set that is strictly greater than 3

    auto it5 = s.find(2);
    auto it6 = s.find(4);
    s.erase(it5, it6); // removes all elements in the range [it5, it6) from the set
}