#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[10] = {1,2,3,-4,5,2,7,11,-3,8};
    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0; i<10; i++){
        sum += arr[i];
        maxi = max(sum, maxi);
        if( sum <0){
            sum = 0;
        }
    }
    cout << "The Sum of subarray with largest Sum is: " << maxi << endl;
    return 0;
}