#include <bits/stdc++.h>
using namespace std;

    int main()
    {
        class Solution
        {
        public:
            bool squareIsWhite(string coordinates)
            {
                if (coordinates[0] == 'a' || coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g')
                {
                    if ((coordinates[1] - '0') % 2)
                    {
                        return false;
                    }
                    return true;
                }
                else
                {
                    if ((coordinates[1] - 0) % 2)
                    {
                        return true;
                    }
                    return false;
                }
            }
        };
    return 0;
}