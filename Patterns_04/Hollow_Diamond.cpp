#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows for the hollow diamond: ";
    cin >> n;
    // Upper half
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print first star
        cout << "*";

        // Print inner spaces and second star (if not first row)
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print first star
        cout << "*";

        // Print inner spaces and second star (if not first row)
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}