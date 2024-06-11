#include<iostream>
using namespace std;
    int main(){
        int arr[] = {3, 4, 5, 6, 7, 2};
        int target = 12;
        int size = 6;
        int count = 0;
        for (int i = 0; i < size;i++){
            for (int j = i + 1; j < size;j++){
                if(arr[i] + arr[j] == target){
                    count++;
                }
            }
        }
        cout << "No of pairs:  " << count;
}