#include <iostream>
using namespace std;

// quick sort = moves smaller elements to left of a pivot.
    	//  recursively divide array in 2 partitions

    	//  run-time complexity = Best case O(n log(n))
    	//  Average case O(n log(n))
    	//  Worst case O(n^2) if already sorted
    	
    	//  space complexity    = O(log(n)) due to recursion

void quickSort(int arr[], int start, int end);
int partition(int arr[], int start, int end);

int main(){
    
    int arr[]{8,5,9,1,4,2,7,6,3};
    quickSort(arr, 0, size(arr)-1);
    for(auto i : arr) cout << i << ' ';
    cout << '\n';
    return 0;
}

void quickSort(int arr[], int start, int end){
    if(end <=  start) return; 
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot + 1, end);
}

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start - 1;
    for(int j = start; j <= end -1; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}