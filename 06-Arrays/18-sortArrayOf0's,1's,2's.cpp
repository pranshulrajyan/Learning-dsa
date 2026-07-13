#include<iostream>
using namespace std;
int main(){
    int arr[5] = {0,0,1,2,0};
    int low = 0;
    int mid = 0;
    int high = 4;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    cout << "The sorted array of 0's, 1's and 2's is: ";
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}