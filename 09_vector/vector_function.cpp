#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec_char{'a', 'b', 'c', 'd', 'e'};

    cout << "size of vector is : " << vec_char.size() << endl; // This function is used for to get size of a vector.
    vec_char.push_back('f');
    cout << "size of vector after push_back is : " << vec_char.size() << endl; // This function is used for to get size of a vector after push_back.
    vec_char.pop_back();                                                       // This function is used for to remove the last element of a vector.
    cout << "size of vector after pop_back is : " << vec_char.size() << endl;  // This function is used for to get size of a vector after pop_back.

    cout << vec_char.front() << endl; // This function is used for to get the first element of a vector.
    cout << vec_char.back() << endl;  // This function is used for to get the
    // last element of a vector.
    cout << vec_char.at(2) << endl; // This function is used for to get the element at a specific index of a vector.
    for (char val : vec_char)
    {
        cout << val << " ";
    }
    return 0;
}