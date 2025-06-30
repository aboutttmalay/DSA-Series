#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " of the array element : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int start, end;
    for (start = 0; start < size; start++)
    {
        for (end = start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout << arr[i];

            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}