// remove duplicates from sorted array
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int index = 0;
    for (auto it : s)
    {
        arr[index] = it;
        index++;
    }
    cout << "The number of unique elements in given array are: " << index;
    cout << "\nThe array of unique elements is: ";
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}