#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 5, 3, 8, 4, 10};
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int x = it;
            int cnt = 1;

            while(st.find(x+1) != st.end()){
                cnt++;
                x = x+1;
            }
            longest = max(longest, cnt);
        }
    }
    cout << longest << endl;
    return 0; 
}