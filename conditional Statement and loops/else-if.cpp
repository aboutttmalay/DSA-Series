// student grade system

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: \n";
    cin >> marks;

    if(marks>=90){
        cout << "you have a grade 'A' \n";
    } else if (marks>=80 && marks<=80)
    {
        cout << "you have a grade 'B' \n";
    }
    else if (marks>=70 && marks<80)
    {
        cout << "you have a grade 'C' \n";
    }
    else if (marks>=60 && marks<70)
    {
        cout << "you have a grade 'D' \n";
    }
    else if (marks>=50 && marks<60)
    {
        cout << "you have a grade 'E' \n";
    }
    else
    {
        cout << "you have failed \n";
    }
    return 0;
}