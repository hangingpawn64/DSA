#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int k = n - i; k>=0 ; k--)
        {
            cout << " ";
        }
        for (int j = i; j >=1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}