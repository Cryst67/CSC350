#include <iostream>
using namespace std;

    // selection sort = search through an array and keep track of the minimum value during 
        //			         each iteration. At the end of each iteration, we swap values.
        
        //				 Quadratic time O(n^2)
        //				 small data set = okay
        //				 large data set = BAD

void selectionSort(int arr[], int n);
int main(){
 
    int arr[]{8,5,9,1,4,2,7,6,3};
    int n = size(arr);
    selectionSort(arr, n);

    for(auto val: arr){
        cout << val << ' ';
    }
    cout << '\n';

    return 0;
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1;i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[min] > arr[j]) min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}