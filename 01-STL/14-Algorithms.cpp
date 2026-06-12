#include <iostream>
#include <algorithm>
#include <algorithm>
#include <numeric>
#include <functional>
#include <utility>

using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }
    if (p1.first > p2.first)
    {
        return true;
    }

    return false;
}
void explainAlgorithms()
{

    sort(a, a + n);                          // Sorts the array in ascending order
    sort(a, a + n, greater<int>());          // Sorts the array in descending order
    reverse(a, a + n);                       // Reverses the order of the elements in the array
    int maxElement = *max_element(a, a + n); // Finds the maximum element in the array
    int minElement = *min_element(a, a + n); // Finds the minimum element in the array
    int countOf5 = count(a, a + n, 5);       // Counts the number of occurrences of the value 5 in the array
    int sum = accumulate(a, a + n, 0);       // Calculates the sum of all elements in the array, starting with an initial value of 0

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}}; // sort this array according to the second elememt, if second element is same then sort it according to the first element in decreasing order
    sort(a, a + 3, comp);

    int num = 7;
    int cnt = __builtin_popcount(num); // gives the number of 1s in boolean value of 7

    long long num = 123456789;
    int cnt = __builtin_popcountll(num); // gives the number of 1s in boolean value of 123456789

    //to find all the permutations of a number:
    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}