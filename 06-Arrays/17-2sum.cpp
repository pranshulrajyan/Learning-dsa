#include<iostream>
using namespace std;
#include<map>
#include<vector>
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout <<"Enter elements of the array: ";
    vector<int> arr(n);
    for(auto &it : arr){
        cin >> it;
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    map<long long, int>twoSum;
    for(int i = 0; i<n; i++){
        int complement = target - arr[i];
        if(twoSum.find(complement) != twoSum.end()){
            cout << "The indices of the two numbers from the array that add up to the target: " << twoSum[complement] << " & " << i << endl;
            return 0;
        }
        twoSum[arr[i]] = i;
    }
    cout << "No Pair found" << endl;
}