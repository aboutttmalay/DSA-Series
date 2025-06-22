// #include<iostream>
// using namespace std;
// int main()
// {

//     int n =30;
//     for(int i=1;i<=n;i++){
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }


// question : - sum of n naturual n
// #include<iostream>
// using namespace std;
// int main()
// {

//     int n ,sum;
//     cout <<"Ente the number: " << endl;
//     cin >> n;
//     for (int i = 0; i <=n; i++)
//     {
//         sum +=i;

//     }
//     cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
//     cout << endl;
    
//     return 0;
// }


// sum of all odd number
#include<iostream>
using namespace std;
int main()
{
    
    int n ,sum =0;
    cout <<"Ente the number: " << endl;
    cin >> n;

    for (int i=1;i<n;i++){
        if(i%2 !=0){
            sum += i;
        }
    }
    cout <<"The sum of all odd number are: " << sum << endl;
    return 0;
}