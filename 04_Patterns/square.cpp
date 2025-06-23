// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//             ch +=1; // char + int
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     int num = 1;

//     cout << "Enter the number: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     cout << "After the pattern : "<< num << endl;
//     return 0;
// }


// charcatrs version
#include <iostream>
using namespace std;
int main()
{

    int n;
    char ch = 'A';

    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << "After the pattern : "<< ch << endl;
    return 0;
}
