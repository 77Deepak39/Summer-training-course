#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 8, 9, 7, 6, 3};
    int largest = arr[0];
    for (int i = 0; i<=6;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << largest << endl;
}