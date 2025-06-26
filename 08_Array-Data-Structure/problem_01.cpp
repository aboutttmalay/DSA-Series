
// find smallest number of an array

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {

//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     int arr[size];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     int smallest = INT_MAX;
//     // int index =-1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//             // index = i;
//         }
//     }
//     cout << "Smallest number is: " << smallest << endl;
//     // cout << "Smallest number is at index: " << index << endl;
    
//     return 0;
// }


// find largest number of an array

#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

    int largest = INT_MIN;
    int index =-1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
    }
    cout << "largest number is: " << largest << endl;
    cout << "largest number is: " << index << endl;
    
    return 0;
}