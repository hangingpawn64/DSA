#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Brute
    //  class Solution
    //  {
    //  public:
    //      vector<int> twoSum(vector<int> &nums, int target)
    //      {
    //          vector<int>::iterator it1 = nums.begin();
    //          vector<int>::iterator it2 = nums.begin();
    //          vector<int> result;
    //          for (int i = 0; i < nums.size(); i++)
    //          {
    //              for (int j = i; j < nums.size(); j++)
    //              {
    //                  if (nums[i] + nums[j] == target && i != j)
    //                  {
    //                      result.push_back(i);
    //                      result.push_back(j);
    //                  }
    //              }
    //          }
    //          return result;
    //      }
    //  };

    // Optimal
    class Solution
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            unordered_map<int, int> mpp;
            vector<int> res;
            for (int i = 0; i < nums.size(); i++)
            {
                int a = nums[i];
                int req = target - a;
                if (mpp.find(req) != mpp.end())
                {
                    res.push_back(i);
                    res.push_back(mpp[req]);
                    break;
                }
                mpp[a] = i;
            }
            return res;
        }
    };
    return 0;
}