#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, -4, 5, 2, 7, 11, -3, 8};
    int sum = 0;
    int maxi = INT_MIN;
    int start = 0, end = 0, tempstart = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            start = tempstart;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
            tempstart = i + 1;
        }
    }
    cout << "The Sum of subarray with largest Sum is: " << maxi << endl;
    cout << "The subarray is: ";
    for (int i = start; i < end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}