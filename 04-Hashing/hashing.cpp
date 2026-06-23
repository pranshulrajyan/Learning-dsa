#include <iostream>
#include <map>
#include <vector>
using namespace std;
// hashing for numbers:
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array as per size: ";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    // precomputation:
    int hash[13] = {0}; // size of the hash array is declared as per the given largest int(in this case 12).
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter the number: ";
        cin >> number;

        // fetch
        cout << "The number of times it apperared in array is " << hash[number] << endl;
    }
    return 0;
}
// hashing for characters:
int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--)
    {
        char alphabet;
        cout << "Enter the alphabet: ";
        cin >> alphabet;
        cout << "The number of times it appeared in the string is: " << hash[alphabet - 'a'] << endl;
    }
}
// hashing using maps:
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array as per size: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q--)
    {
        int number;
        int freq;
        cout << "Enter a number: ";
        cin >> number;
        cout << "The number of times it appeared in the array is: " << mpp[number] << endl;
    }
}