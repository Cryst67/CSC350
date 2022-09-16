#include <iostream>
using namespace std;

// Insertion sort = after comparing elements to the left,
	//				shift elements to the right to make room to insert a value
	
	//				Quadratic time O(n^2)
	//				small data set = decent
	//				large data set = BAD
	
	//				Less steps than Bubble sort
	//				Best case is O(n) compared to Selection sort O(n^2)

void insertionSort(int arr[], int n);

int main(){

    int arr[]{8,5,9,1,4,2,7,6,3};
    int n = size(arr);
    insertionSort(arr, n);
    for(auto val : arr){
        cout << val << ' ';
    }
    cout << '\n';
    return 0;
}

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && (arr[j] > temp)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}