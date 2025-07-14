// #include<iostream>
// using namespace std;
// int main()
// {
//     int a  =10;
//     int *ptr = &a;
//     int **parent_Ptr = &ptr;
//     cout << &ptr << endl;
//     cout << parent_Ptr << endl;

//     return 0;
// }

// * -> Dereference operator;

#include<iostream>
using namespace std;
int main()
{

    int a =10;
    int *ptr = &a;

    int **parent_ptr = &ptr;
    cout << *(parent_ptr) << endl;
    cout << (ptr)  << endl;
    cout << **(parent_ptr) << endl;
    return 0;
}