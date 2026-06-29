#include <iostream>
#include <vector>
using namespace std;
int sortFunction(vector<int>& nums, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j)
    {
        while (i <= high &&nums[i] <= nums[pivot])
        {
            i++;
        }
        while (j >= low && nums[j] > nums[pivot])
        {
            j--;
        }
        if (i < j)
        {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);
    return j;
}
void quickSort(vector<int>& arr, int low, int high)
{
    int n = arr.size();
    if (low >= high)
    {
        return;
    }
    if (low < high)
    {
        int partition = sortFunction(arr, low, high);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
    
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter the elements of the array as per the size: ";
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    cout << "The sorted array is: ";
    quickSort(arr, 0, arr.size() - 1);
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}