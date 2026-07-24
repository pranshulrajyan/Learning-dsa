#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,1,2,-2,6,-4};
    int k = 6;
    map<int, int> mpp;
    int cnt = 0;
    int prefixSum = 0;
    for(int i = 0; i<nums.size(); i++){
        prefixSum += nums[i];
        int remove = prefixSum - k;
        cnt += mpp[remove];
        mpp[prefixSum]++;
    }
    cout << "The maximum number of subarrays with sum k: " << cnt << endl;
}