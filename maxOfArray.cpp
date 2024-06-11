#include<iostream>
using namespace std;
int main(){
    int arr[5] = {4, 5, 8, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0;i<=n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
        cout << max;

}