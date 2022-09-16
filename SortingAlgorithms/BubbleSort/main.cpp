#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
int main(){
 
    int arr[]{8,5,9,1,4,2,7,6,3};
    int n =  size(arr);
    bubbleSort(arr, n);
    for(auto val : arr){
        cout << val << ' ';
    }
    cout << '\n';
    return 0;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i <=n-2; i ++){
        for(int j = 0; j <= n-i-2; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    
}