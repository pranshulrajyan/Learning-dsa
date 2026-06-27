#include <iostream>
#include <vector>
using namespace std;
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    int i = low;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array as per the size: ";
    for (auto &it : arr)
    {
        cin >> it;
    }
    mergeSort(arr, 0, (arr.size() - 1));
    cout << "The sorted array is: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}