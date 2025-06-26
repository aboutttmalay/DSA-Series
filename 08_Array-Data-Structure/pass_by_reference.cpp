#include<iostream>
using namespace std;


void ChangerArr(int arr[], int size)
{
    cout << "in function\n" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] *=2;
    }
}
int main()
{
    int arr[3] = {1, 2, 3};
    ChangerArr(arr, 3);

    cout << "in main\n"<< endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}