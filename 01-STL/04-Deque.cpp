#include <bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(3); // {3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}
    
    cout<<"Deque: ";
    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    explainDeque();
    return 0;
}