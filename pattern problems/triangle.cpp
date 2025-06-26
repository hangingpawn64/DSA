#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int stars = i;
        for (int k = 0; k < n - stars ; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "* "; //lmao😭😭😭
        }
        cout << endl;
    }
    return 0;
}