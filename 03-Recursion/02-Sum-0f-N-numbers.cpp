#include <iostream>
using namespace std;
// to calculate Sum of first N numbers:
class Solution
{
public:
    int NnumbersSum(int N)
    {
        if (N == 1)
        {
            return 1;
        }

        return N + NnumbersSum(N - 1);
    }
};

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    Solution obj;
    int ans = obj.NnumbersSum(N);
    cout << "The sum is: " << ans << endl;
}