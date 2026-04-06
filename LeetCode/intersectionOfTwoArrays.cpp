#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
        {
            unordered_map<int, int> mp;
            vector<int> res;
            for (int i = 0; i < nums1.size(); i++)
            {
                mp[nums1[i]] += 1;
            }
            for (int it : nums2)
            {
                if (mp.find(it) != mp.end())
                {
                    res.push_back(it);
                }
                mp.erase(it);
            }
            return res;
        }
    };
    return 0;
}