#include<iostream>
using namespace std;
int main(){
    int arr[5] = {4, 5, 6, 1, 2};
    int product = 1;
    for (int i = 0; i <= 4;i++){
        product = product * arr[i];
    }
    cout<< product;
}