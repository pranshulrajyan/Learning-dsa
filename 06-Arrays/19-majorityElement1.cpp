#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int>MajorityElement;
    int arr[9] = {1,2,3,4,4,4,4,4,3};
    for(int i : arr){
        MajorityElement[i]++;
    }
    for(auto it : MajorityElement){
        if(it.second > 9/2){
            cout << "The majority element is: " << it.first;
        }
    }
    cout << endl;
    return 0;
}