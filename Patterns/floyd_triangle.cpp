// floyd's triangle pattern

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// inverted triangle pattern

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int num =1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; i++)
        {
            cout << " ";
        }
        for (int j =0; j < n - i; j++)
        {
            cout << (i + 1)<< " "; 
        }
        cout << endl;
    }

    return 0;
}