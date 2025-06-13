// //Check its Character is a lowercase or upper case.

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout << "Enter the character: \n";
//     cin >> ch;

//     if(ch>='a' && ch<='z'){
//         cout << "Your character is in a lowercase.\n";
//     }
//     else if(ch>='A' && ch<='Z'){
//         cout << "Your character is in Uppercase.";
//     } else {
//         cout << "You enter worng character.";
//     }
//     return 0;
// }


//Check its Character is a lowercase or upper case by using binary number.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character: \n";
    cin >> ch;

    if(ch>='65' && ch<='90'){
        cout << "Your character is in a lowercase.\n";
    }
    else if(ch>='65' && ch<='90'){
        cout << "Your character is in Uppercase.";
    } else {
        cout << "You enter worng character.";
    }
    return 0;
}