#include <iostream>
using namespace std;

int leftChild(int n);
int rightChild(int n);
int heapMaximum(int arr[], int n);
void heapSort(int arr[], int n);
void BuildMaxHeap(int arr[], int n);
void maxHeapify(int arr[], int n, int i);

int main(){
 
    int arr[]{8,5,9,1,4,2,7,6,3,15,14,68,103,14,157,36};
    int n = size(arr);
    heapSort(arr, n);
    for(int p = 0; p < n; p++) cout << arr[p] << ' ';
    cout << '\n';
    return 0;
}

int leftChild(int n){
    int index = n+1;
    return (index*2)-1;
}

int rightChild(int n){
    int index = n+1;
    return(index*2);
}

int heapMaximum(int arr[], int n){
    return arr[0];
}

void heapSort(int arr[], int n){
    BuildMaxHeap(arr, n);
    for(int i = n-1 ; i > 0; i--){
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        maxHeapify(arr, i, 0);
    }
}

void BuildMaxHeap(int arr[], int n){
    for(int i = n/2; i > -1; i--){
        maxHeapify(arr, n, i);
    }
}

void maxHeapify(int arr[], int n, int parent){      
    int l = leftChild(parent);                       
    int r = rightChild(parent);                      
    int largest = -1;
    if((l < n) && arr[l] > arr[parent]){
        largest = l;
    }else largest = parent;
    if((r < n) && arr[r] > arr[largest]){
        largest = r;
    }
    if(largest != parent){
        int temp = arr[parent];      
        arr[parent] = arr[largest];  
        arr[largest] = temp;
        maxHeapify(arr, n, largest);
    }
}