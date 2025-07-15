// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int a =15;
//     int *ptr = &a;

//     cout << "before update in ptr : "<< ptr << endl;
//     ptr++;
//     cout << "After update in ptr : "<< ptr << endl; // it will add 4 bytes in a address

//     // add / subtract number

//     ptr = ptr + 2; // 2int  => 8B
//     cout << ptr << endl; // +8

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
//    cout  << *arr << endl;
//    cout << *(arr + 1) << endl; // it print 2 
//    cout << *(arr + 2) << endl; // it print 3 
//    cout << *(arr + 3) << endl; // it print 4 
     
    // int *ptr2 ;
    // int *ptr1 = ptr2 + 2;
    // cout << (ptr1- ptr2) << endl;

    // compare two pointer 
    int *ptr1;
    int *ptr2;
    
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << (ptr1< ptr2 ) << endl;
    return 0;
}