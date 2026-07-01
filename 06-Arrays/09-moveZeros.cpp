#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    cout << "Enter the elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    int j = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] !=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout << "number of non-zero elements: " << j ;
    cout << "\nArray after moving zeros to the end: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}