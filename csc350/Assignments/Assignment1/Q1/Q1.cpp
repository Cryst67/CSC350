#include <iostream>
using namespace std;

/*
Q1. Given an array A[0..n-1], find the (smallest) index 
    such that A[index] is the maximum value in A[0..n-1]
    
    a.  Pseudocode
        MaxValIndex(A, n)
1       max = A[0]                  //1
2       maxIndex = 0                //1
3       for(i = 1 to n-1)           //(n-1)
4           if(A[i] > max)
5               max = A[i]
6               maxIndex = i
7       return maxIndex

    b.  n is defined to be the size of array A[0 ... n-1]
        T(n) =  1 + 1 + (n-1)
             =  n + 1

    c. Asymptotic Order: O(n)

*/

int maxIndex(int arr[], int n);

int main(){

    int arr[]{1,2,8,4,5,6,7,8,8,8};
    int maxInd = maxIndex(arr, size(arr));
    cout << "Max Value: " << arr[maxInd] 
        << " at index " << maxInd << '\n';
    return 0;

}

int maxIndex(int arr[], int n){
    int max = arr[0];
    int maxIndex = 0;
    size_t i = 1;
    for (; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}