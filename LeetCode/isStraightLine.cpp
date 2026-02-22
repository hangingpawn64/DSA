#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        bool checkStraightLine(vector<vector<int>> &coordinates)
        {
            // int x = coordinates[0][0];
            // int y = coordinates[0][1];
            // int y2 = coordinates[1][1];
            // int x2 = coordinates[1][0];
            for (int i = 2; i < coordinates.size(); i++)
            {
                // int xi = coordinates[i][0];
                // int yi = coordinates[i][1];

                // if((y2 - y)*(xi-x) != (yi-y)*(x2-x)){
                //     return false;
                // }
                if (((coordinates[1][1] - coordinates[0][1]) * (coordinates[i][0] - coordinates[0][0])) !=
                    ((coordinates[i][1] - coordinates[0][1]) * (coordinates[1][0] - coordinates[0][0])))
                {
                    return false;
                }
            }
            return true;
        }
    };
    return 0;
}