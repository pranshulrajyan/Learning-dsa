#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[8] = {1, 2, -4, 5, -6, -9, 8, -8};
    int ans[8];
    int pos = 0;
    int neg = 1;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < 0)
        {
            ans[neg] = arr[i];
            neg += 2;
        }
        else
        {
            ans[pos] = arr[i];
            pos += 2;
        }
    }
    cout << "The rearranged Array is: ";
    for (int i = 0; i < 8; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

// If number of positive and negative elements are no equal:
int main()
{
    int arr[9] = {1, 2, -3, 4, 5, -8, -10, 7, 11};
    vector<int> pos, neg;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int ind = 2 * neg.size();
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[ind] = pos[i];
            ind++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int ind = 2 * pos.size();
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[ind] = neg[i];
            ind++;
        }
    }
    cout << "The rearranged Array is: ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}