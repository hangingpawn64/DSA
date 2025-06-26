#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}