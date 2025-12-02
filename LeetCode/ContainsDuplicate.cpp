#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        bool containsDuplicate(vector<int> &nums)
        {
            unordered_map<int, int> mpp;
            for (int i = 0; i < nums.size(); i++)
            {
                mpp[nums[i]]++;
            }
            for (unordered_map<int, int>::iterator it = mpp.begin(); it != mpp.end(); it++)
            {
                if (it->second > 1)
                {
                    return true;
                }
            }
            return false;
        }
    };
    return 0;
}