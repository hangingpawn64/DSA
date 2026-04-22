#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<vector<int>> generate(int numRows)
        {
            vector<vector<int>> res;
            for (int j = 1; j <= numRows; j++)
            {
                vector<int> temp = {1};
                int ans = 1;
                for (int i = 1; i < j; i++)
                {
                    ans = ans * (j - i);
                    ans = ans / i;
                    temp.push_back(ans);
                }
                res.push_back(temp);
            }
            return res;
        }
    };
    return 0;
}