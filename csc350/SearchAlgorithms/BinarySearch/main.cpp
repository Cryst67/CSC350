#include <iostream>
using namespace std;

/*
    Given a SORTED sequence of values
    Return the index of found value
    Half of the sequence is disregarded during each step

*/

int binarySearch(int arr[], int n, int val);

int main(){
    int arr[30];
    for(int i = 0; i < size(arr); i++){
        arr[i] = i;
    }
    
    cout << binarySearch(arr, size(arr), 9) << '\n';

    return 0;
}

int binarySearch(int arr[], int n, int val){
    int lo = 10, hi = 20;
    cout << arr[10] << ", " << arr[20] <<"\n";
    while(lo <= hi){
        int midIndex = (lo+hi)/2;
        cout << midIndex << '\n';
        if(arr[midIndex] > val){
            hi = midIndex - 1;
        }else if(arr[midIndex] < val){
            lo = midIndex + 1;
        }else{
            return midIndex;
        }
    }

    return -1;
}