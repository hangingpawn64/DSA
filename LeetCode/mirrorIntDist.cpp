#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int mirrorDistance(int n)
        {
            string s = to_string(n);
            for (int i = 0; i < s.size() / 2; i++)
            {
                swap(s[i], s[s.size() - 1 - i]);
            }
            int rev = stoi(s);
            return abs(rev - n);
        }
    };
    return 0;
}