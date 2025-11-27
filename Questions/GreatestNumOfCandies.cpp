#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
        {
            int n = candies.size();

            vector<int>::iterator it = candies.begin();
            int greatestNum = 0;
            for (auto it : candies)
            {
                if (it >= greatestNum)
                {
                    greatestNum = it;
                }
            }

            vector<bool> result;
            for (auto it : candies)
            {
                if (it + extraCandies >= greatestNum)
                {
                    result.push_back(true);
                }
                else
                {
                    result.push_back(false);
                }
            }
            return result;
        }
    };
    return 0;
}