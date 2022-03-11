#include<iostream>
using namespace std;

int linearSearch(int arr[], int len, int target){
    for(int i = 0; i < len; i++){
        if(target == arr[i]) return i;
    }
    return -1;
}

int main(){
    int arr[] = {3, 5, 2, 4, 9};
    int index = linearSearch(arr, sizeof(arr) / sizeof(int), 4);
    if(index == -1) cout << "false\n";
    else cout << index << endl;
}