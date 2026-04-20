#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int maxDistance(vector<int> &colors)
        {
            int n = colors.size();
            int curr = 0;
            int fD = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = n - 1; j > i; j--)
                {
                    if (colors[j] != colors[i])
                    {
                        curr = abs(j - i);
                        break;
                    }
                }
                if (curr > fD)
                {
                    fD = curr;
                }
            }
            return fD;
        }
    };
    return 0;
}