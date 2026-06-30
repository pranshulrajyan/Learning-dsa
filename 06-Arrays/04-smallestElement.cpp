#include <iostream>
using namespace std;
int smallestElement(int arr[], int n){
    int smallest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
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
    int ans = smallestElement(arr, n);
    cout << "The smallest element of given array is: " << ans << endl;
}