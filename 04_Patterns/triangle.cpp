// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "X";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// numbers version
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << i+1 << " ";

//         }
//         cout << endl;
//     }
//     return 0;
// }

// charcaters version
// 


// reverse triange code

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
    // Print spaces
    for(int j = 0; j < i; j++) {
        cout << "  ";
    }
    // Print numbers
    for(int j = i; j < n; j++) {
        cout << j+1 << " ";
    }
    cout << endl;
}
    return 0;
}
