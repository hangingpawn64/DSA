#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        void reverseString(vector<char> &s)
        {
            for (int i = 0; i < s.size() / 2; i++)
            {
                char temp;
                temp = s[i];
                s[i] = s[s.size() - 1 - i];
                s[s.size() - 1 - i] = temp;
            }
        }
    };
    return 0;
}