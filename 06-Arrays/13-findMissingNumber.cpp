#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> hashArr(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        hashArr[arr[i]] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (hashArr[i] == 0)
        {
            cout << "The missing number is: " << i << endl;
            break;
        }
    }

    // Time Complexity: O(2n)
    // Space Complexity: O(n)

    // Optimal solution
    int XOR1 = 0;
    int XOR2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i + 1);
    }
    int ans = XOR1 ^ XOR2;
    cout << "The missing number is: " << ans << endl;
}