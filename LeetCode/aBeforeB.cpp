#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        bool checkString(string s)
        {
            int bStart = -1;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'b')
                {
                    bStart = i;
                    break;
                }
            }
            if (bStart == -1)
            {
                return true;
            }
            for (int i = bStart; i < s.size(); i++)
            {
                if (s[i] == 'a')
                {
                    return false;
                }
            }
            return true;
        }
    };
    return 0;
}