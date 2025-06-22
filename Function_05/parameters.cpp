#include<iostream>
using namespace std;

// sum of 2 number

int sum(int a,int b){
    int s = a + b;
    return s;
}

// min of two number

int minofTwo(int a,int b){
    if(a<b) {
        return a;
    } else {
        return b;
    }
}
int main()
{
    cout << "sum of two number: "<< sum(5,10) << endl;
    cout <<  "min= "<<minofTwo(53463522,24354645) << endl;
    return 0;
}