#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr1, arr2, intersection;
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    arr1.resize(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of second array: ";
    cin >> n2;
    arr2.resize(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout << "Intersection of the two arrays is: ";
    for (int k = 0; k < intersection.size(); k++)
    {
        cout << intersection[k] << " ";
    }
    cout << endl;
    return 0;
}