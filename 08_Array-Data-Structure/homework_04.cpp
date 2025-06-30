// WAF to print intersection of 2 array

#include<iostream>
using namespace std;

void intersection(int arr1[] ,int size1,int arr2[],int size2){
     for (int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                    cout << arr1[i] << " ";
                    break; // To avoid printing duplicates from arr1
            }
            else if (arr1[i]> arr2[j]) {
                // If we reach the end of arr2 and no match was found
                cout << arr2[j] << " ";
                continue; // No action needed, just continue to the next i
            }
            else if (arr1[i] < arr2[j]) {
                // If arr1[i] is less than arr2[j], we can break the inner loop
                // because arr2 is sorted and no further matches will be found
                cout << arr1[i] << " ";
                break;
            }
        }
     }
}
int main()
{
    int size1, size2;
    cout << "Enter the size of first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter " << size1 << " elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter " << size2 << " elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    cout << "Intersection of the two arrays: ";
    intersection(arr1, size1, arr2, size2);
    cout << endl;
    return 0;
}