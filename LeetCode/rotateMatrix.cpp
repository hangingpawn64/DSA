#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        void swap(int a, int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        void transpose(vector<vector<int>> &matrix)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < i; j++)
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }
        void revByCol(vector<vector<int>> &matrix)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < (matrix[0].size() / 2); j++)
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][matrix[0].size() - 1 - j];
                    matrix[i][matrix[0].size() - 1 - j] = temp;
                }
            }
        }
        void rotate(vector<vector<int>> &matrix)
        {
            transpose(matrix);
            revByCol(matrix);
        }
    };
    return 0;
}