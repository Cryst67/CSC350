#include <iostream>
#include <array>
using namespace std;

/*Linear Search: Iterate through a collection one element at a time 
    Runtime Complexity O(n)

    Advantages: 
    1. Sequence does not need to be sorted
    2. Fast for small/medium size data sets
    3. Useful for datastructs with no random access

    Disadvantages:
    1. Slow for large data sets
*/

int linearSearch(int arr[], int n, int val);

int main(){

    int arr[] = {13,45,89,102,12,42,13,10,2,809};
    int m; cin >> m;
    int index = linearSearch(arr, size(arr), m);
    if(index == -1) cout << "Entered value not found\n";
    else cout << "Entered value found at index " << index << '\n';

    return 0;
}

int linearSearch(int arr[], int n, int val){
    for(int i = 0; i < n; i++){
        if(arr[i] == val) return i;
    }
    return -1;
}