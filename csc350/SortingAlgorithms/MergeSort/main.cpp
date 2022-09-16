#include <iostream>
using namespace std;

    // merge sort = recursively divide array in 2, sort, re-combine
            // run-time complexity = O(n Log n)
            // space complexity    = O(n)
            
void mergeSort(int arr[],int n);
void merge(int leftArr[],int leftSize, int rightArr[],int rightSize, int arr[], int n);

int main(){

    int arr[]{8,5,9,1,4,2,7,6,3};
    mergeSort(arr, size(arr));
    for(auto i : arr) cout << i << ' ';
    cout << '\n';


    return 0;
}

void mergeSort(int arr[],int n){

    if(n <=1) return;
    int middle = n/2;
    int leftArr[middle];
    int rightArr[n-middle];

    int i = 0;
    int j = 0;
    for(; i < n;i++){
        if(i < middle){
            leftArr[i] = arr[i];
        }
        else{
            rightArr[j] = arr[i];
            j++;
        }
    }
    mergeSort(leftArr, middle);
    mergeSort(rightArr, (n - middle));
    merge(leftArr, middle, rightArr, (n-middle), arr, n);
}

void merge(int leftArr[],int leftSize, int rightArr[],int rightSize, int arr[], int n){
    int i = 0, l = 0, r = 0;        //indices
    while((l < leftSize) && (r < rightSize)){
        if(leftArr[l] < rightArr[r]){
            arr[i] = leftArr[l];
            i++;
            l++;
        }else{
            arr[i] = rightArr[r];
            i++;
            r++;
        }
    }
    while(l < leftSize){
        arr[i] = leftArr[l];
        i++;
        l++;
    }
    while(r < rightSize){
        arr[i] = rightArr[r];
        i++;
        r++;
    }
}