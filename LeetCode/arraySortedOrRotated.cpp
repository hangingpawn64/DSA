#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        bool check(vector<int> &nums)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                vector<int> temp = nums;
                reverse(temp.begin(), temp.begin() + i);
                reverse(temp.begin() + i, temp.end());
                reverse(temp.begin(), temp.end());
                if (is_sorted(temp.begin(), temp.end()))
                {
                    return true;
                }
            }
            return false;
        }
    };
    return 0;
}