#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 8, 9, 7, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int SecondLargest = arr[0];
    for (int i = 0; i<=n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for (int i = 0; i <= n;i++){
        if(arr[i]>SecondLargest && arr[i]!=largest){
            SecondLargest = arr[i];
        }
    }
        cout <<"Largest: "<< largest <<" "<<"SecondLargest: "<< SecondLargest << endl;
}