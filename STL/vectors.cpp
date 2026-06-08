#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v; // declaration of vector
    v.push_back(1); // adding element at the end of the vector
    v.emplace_back(2); // adding element at the end of the vector using emplace_back
    //vector is a dynamic array which can grow and shrink in size automatically when elements are added or removed. 
    //vector can also store elements of any data type.
    vector<pair<int , int>> vp; // vector of pairs
    vp.push_back({1,2}); // adding pair to the vector
    vp.emplace_back(3,4); // adding pair to the vector using emplace_back
    //vector of pairs is a vector which can store pairs of elements.
    vector<int> v(5, 0); //vector of size 5 with all elements initialized at 0
    vector<int> v2(v); //vector v2 is a copy of vector v

    //accessing elements of the vector
    //first way to access elements of the vector is using the index operator []
    cout << v[0] << endl; // accessing element at index 0 
    //another way to access elements of the vector is using iterators
    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    vector<int>::iterator it = v.end(); //points to a memory location that is right after the last element, so to print the last value we have to do it-- to get the location of last element and print the output.
    vector<int>::reverse_iterator it = v.rend(); //reverse end iterator points to a memory location that is right before the first element, so to print the first value we have to do it-- to get the location of first element and print the output.
    vector<int>::reverse_iterator it = v.rbegin(); //reverse begin iterator points to the last element of the vector, so to print the last value we can directly print the output without doing it--.
    // another way to access elements of the vector is using the v.back() function which returns the last element of the vector.
    cout << v.back() << " " << endl; //accessing the last element of the vector

    //printing a vector:
    //using iterators
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it : v){
        cout << it << " ";
    }


    //deletion in a vector:
    //Example :{10, 20, 12, 23}
    v.erase(v.begin() + 1); //removes the element at index 1 (20)
    //{10, 12, 23}
    v.erase(v.begin() + 1, v.begin() + 3); //removes the elements from index 1 to index 2 (12 and 23)
    //{10}

    //insertion in a vector:
    vector<int>v(2,100); // {100, 100}
    v.insert(v.begin() , 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    vector<int>copy(2, 50); // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}
    //other functions of vector:
    cout << v.size() << endl; // returns the size of the vector
    v.pop_back(); // removes the last element from the vector
    //v1 -> {10,20}
    //v2 -> {30,40}
    v.swap(v2); //swaps the contents of v and v2
    v.clear(); //removes all the elements from the vector
    cout << v.empty() << endl; //returns true if the vector is empty, otherwise returns false
}