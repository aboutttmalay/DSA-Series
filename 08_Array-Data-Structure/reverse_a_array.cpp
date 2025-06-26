#include<iostream>
using namespace std;


int reverseArray(int arr[],int size){
    int start =0;
    int end = size -1;
    int swap;

    while(start < end){
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;

    }
}
int main()
{
    int arr[] = {4 ,3, 6,7,2,3,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);

    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}