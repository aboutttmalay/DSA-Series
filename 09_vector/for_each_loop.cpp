#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec_char {'a','b','c','d','e'};

    for (char val : vec_char) {
        cout << val << " ";
    }
    return 0;
}