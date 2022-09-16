#include <iostream>
using namespace std;
int U[10000]; //plenty big enough? File scope.
//pre: b[l0..mid-1] and b[mid..hi-1] are sorted. U[lo..hi-1] exists
// post:b permuted so b[lo..hi-1]is sorted (rest of b unchanged, U is trashed)

void merge(int b[], int lo, int mid, int hi);

int main() {
    int myArray[] = { 2,19,5,4,18,103,77,77,77,102 };
    int n = 10; //(arraysize)
    merge(myArray, 3, 6, 10);
    for (int i = 0; i < n; i++) cout << myArray[i] << ',';
    cout << endl;
}


void merge(int b[], int lo, int mid, int hi){
   
    int i = lo, j = mid, k = lo;
    while(i<mid && j <hi){
        if(b[i] < b[j]){
            U[k] = b[i];
            i++;
        }else{
            U[k] = b[j];
            j++;
        }
        k++;
    }

    while(k < hi){
        if(i < mid){
            U[k++] = b[i++];
        }else{
            U[k++] = b[j++];
        }
    }

    for (auto p = lo; p < hi; p++){
        b[p] = U[p];
    }
    
}