// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
// usin 1 parameter i only:
#include <iostream>
using namespace std;

class Solution
{
public:
    
    void reverse(int arr[],int i, int n)
    {
        if (i >= n / 2)
            return;
        swap(arr[i], arr[n - i - 1]);
        reverse(arr, i+1, n);
    }
};

int main(){

    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter number of elements as per the coice of size of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    Solution obj;
    cout << "\nThe reverse of array is: " << endl;
    obj.reverse(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}