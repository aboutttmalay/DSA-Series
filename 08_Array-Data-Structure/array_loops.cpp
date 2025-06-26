// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[5] = {56, 67, 45, 34, 23};
//     int size =5;
//     int sz = sizeof(marks) / sizeof(int); // Calculate size of the array
//     cout << "Size of the array: " << sz << endl;
//     cout << " " <<endl;
//     for(int i=0;i<size;i++){
//         cout << marks[i] << endl;
//     }
//     return 0;
// }

// input a array

#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int marks[size];

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }


    for (int i=0;i<size;i++){
        cout << marks[i] << endl;
    }
    return 0;
}