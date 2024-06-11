#include<iostream>
using namespace std;
int main(){
    int arr[10], n , i;
    cout << "Enter Array Size: ";
    cin >> n;
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // Deletion at the Beginning Array

   /* for (int i = 0; i < n - 1;i++){
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Array after deletion:" << endl;
    for (int i = 0; i < n;i++){
        cout << arr[i] << endl;
    }
    */
    n--;
    cout << "Array delete at the end:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    // arr[i] = 9;
    // n++;
    // cout << "Array after inserting 9: "<<endl;
    // for (int i = 0; i < n;i++){
    //     cout << arr[i]<<endl;
    // }
    // return 0;
}