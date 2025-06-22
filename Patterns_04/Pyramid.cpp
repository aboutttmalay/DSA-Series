#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print ascending numbers
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        // Print descending numbers
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}