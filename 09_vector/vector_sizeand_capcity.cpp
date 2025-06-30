#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(20);

    cout << "Size of vector is: " << vec.size() << endl; // This function is used to get the size of a vector.
    cout << "Capacity of vector is: " << vec.capacity() << endl; // This function is used to get the capacity of a vector.
    return 0;
}