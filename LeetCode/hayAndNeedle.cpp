#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int strStr(string haystack, string needle)
        {
            for (int i = 0; i < haystack.size(); i++)
            {
                string str = haystack.substr(i, needle.size());
                if (str == needle)
                {
                    return i;
                }
            }
            return -1;
        }
    };
    return 0;
}