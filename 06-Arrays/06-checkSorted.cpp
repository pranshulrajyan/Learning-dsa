#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter the elements for the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (isSorted(arr, n))
    {
        cout << "The array is sorted";
    }
    else
    {
        cout << "The array is not sorted";
    }
    cout << endl;
}