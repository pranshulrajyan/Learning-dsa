#include <bits/stdc++.h>
using namespace std;


    void explainpair() {
        pair<int , int> p = {4,5};
        cout << p.first << " " << p.second;
        // we can also make pair of different data types
        pair<string , int> p2 = {"Pranshul", 18};
        cout << p2.first << " " << p2.second;
        // we can also make pair of pairs
        pair<pair<int , int> , int> p3 = {{1,2}, 3};
        cout << p3.first.first << " " << p3.first.second << " " << p3.second;
        //we can also make array of pairs
        pair<int , int> arr[] = {{1,2}, {3,4}, {5,6}};
        for(int i = 0; i < 3; i++){
            cout << arr[i].first << " " << arr[i].second << endl;       
    }

}