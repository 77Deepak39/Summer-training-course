#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5, 4, 8, 9,6};
    int sum = 0;
    for (int i = 0; i <= 4;i++){
        sum = sum + arr[i];
    }
    cout << "the sum of array is:" <<sum << endl;
}