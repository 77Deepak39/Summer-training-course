/*
#include<iostream>
using namespace std;
int main(){
    int arr[10], n , x;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter array element: ";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << "Print array element:"<<endl;
    for (int i = 0; i < n;i++){
        cout << arr[i] <<" ";   
    }
    cout << "Enter the insert element in the beginners:"<<endl;
    cin >> x;
    for (int i = n; i > 0;i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    n++;
    cout << "Array elements are: "<<endl;
    for (int i = 0; i < n;i++){
        cout << arr[i]<<endl;
    }
    return 0;
}
*/

// insert element at the end of an array
#include<iostream>
using namespace std;
int main(){
    int arr[10], n, i,x;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the Array element: ";
    for (i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << "Print Array:";
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    cout << "Enter the insert element at the end: " << endl;
    cin >> x;
    arr[i] = x;
    n++;
    cout << "print array after insert element"<<endl;
    for (int i = 0; i < n;i++){
        cout << arr[i] << endl;
    }
}
