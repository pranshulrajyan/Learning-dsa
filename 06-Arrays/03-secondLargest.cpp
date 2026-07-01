#include <iostream>
#include <climits>
using namespace std;
int secondlargestelement(int arr[], int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] < largest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << " Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = secondlargestelement(arr, n);
    cout << "The second largest element of the array is: " << ans << endl;
}