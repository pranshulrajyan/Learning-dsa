#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the sum k: ";
    cin >> k;
    int left = 0, right = 0;
    int sum = arr[0];
    int maxLen = 0;
    while (right < n)
    {
        while (right < n && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        sum += arr[right];
    }
    cout << "The length of longest subArray with sum of k is: " << maxLen << endl;
}