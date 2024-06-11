#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 5, 8, 7, 9};
    int max = arr[0];
    int min = arr[0];
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
        cout <<"max: "<< max << endl;
        for (int i = 0; i < n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
        cout <<"min: "<< min << endl;
}