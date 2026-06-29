#include <iostream>
using namespace std;
int largestElement(int arr[], int n){
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] < largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int ans = largestElement(arr, n);
    cout << "The largest element of given array is: " << ans << endl;
}