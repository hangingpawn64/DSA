#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        bool rotateString(string s, string goal)
        {
            if (s.size() != goal.size())
            {
                return false;
            }
            s = s + s;
            int f = 0;
            int n = goal.size();
            string sub = s;
            for (int i = 0; i < n; i++)
            {
                string sub = s.substr(i, n);
                if (sub == goal)
                {
                    return true;
                }
            }
            return false;
        }
    };
    return 0;
}