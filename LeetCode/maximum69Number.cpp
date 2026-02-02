#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int maximum69Number(int num)
        {
            string s = to_string(num);
            int cnt = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '6' && cnt == 0)
                {
                    s[i] = '9';
                    cnt++;
                }
            }
            num = stoi(s);
            return num;
        }
    };

    return 0;
}