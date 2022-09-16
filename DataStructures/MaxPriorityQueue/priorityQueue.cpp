#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int leftChild(int n);
int rightChild(int n);
int parent(int n);
int heapMaximum(vector<int>& arr);
int extractMaximum(vector<int>& arr, int& heapSize);
void heapIncreaseKey(vector<int>& arr, int i, int key);
void maxHeapInsert(vector<int>& arr, int& heapSize, int key);
void buildMaxHeap(vector<int>& arr, int& heapSize);
void maxHeapify(vector<int>& arr, int& heapSize, int i);

int main(){
    
    vector<int> arr{8,5,9,1,4,2,7,6,3};
    int heap_size =  arr.size();
    buildMaxHeap(arr, heap_size);
    maxHeapInsert(arr, heap_size, 11);
    maxHeapInsert(arr, heap_size, 15);
    for(int i = 0; i < heap_size; i++) cout << arr[i] << ' ';
    cout << '\n';
    return 0;
}

int leftChild(int n){
    int index = n +1;
    return (index*2 -1);
}

int rightChild(int n){
    int index = n+1;
    return (index*2);
}

int parent(int n){
    int index = n - 1;
    return (index/2);
}

int heapMaximum(vector<int>& arr){
    return arr[0];
}

int extractMaximum(vector<int>& arr, int& heapSize){
    if(heapSize < 1){
        cerr << "heap underflow\n";
        return -1; 
    }
    int max = arr[0];
    arr[0] = arr[heapSize-1];
    heapSize--;
    maxHeapify(arr, heapSize, 0);
    return max;
}

void heapIncreaseKey(vector<int>& arr, int i, int key){
    if(arr[i] > key){
        cerr << "new key smaller than current key\n";
        return;
    }
    arr[i] = key;
    while((i > 0) && arr[parent(i)] < arr[i]){
        int temp = arr[i];
        arr[i] = arr[parent(i)];
        arr[parent(i)] = temp;
        i = parent(i);
    }
}

void maxHeapInsert(vector<int>& arr, int& heapSize, int key){
    heapSize++;
    arr.push_back(numeric_limits<int>::infinity()*-1);
    heapIncreaseKey(arr, heapSize-1, key);

}

void buildMaxHeap(vector<int>& arr, int& heapSize){
    for(int i = (heapSize-1)/2; i > -1; i--){
        maxHeapify(arr, heapSize, i);
    }
}

void maxHeapify(vector<int>& arr, int& heapSize, int parent){
    int l = leftChild(parent);
    int r = rightChild(parent);
    int largest = -1;
    if((l < heapSize) && arr[l] > arr[parent])   largest = l;
    else largest = parent;
    if((r < heapSize) && arr[r] > arr[largest]) largest = r;
    if(largest != parent){
        int temp = arr[largest];
        arr[largest] = arr[parent];
        arr[parent] = temp;
        maxHeapify(arr, heapSize, largest);
    }
}