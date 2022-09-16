#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int val);
int main(){
 
    int arr[]{1,2,3,4,5,6,7,8,9};
    int n = size(arr);
    int index = interpolationSearch(arr, n, 8);
    cout << index << '\n';
    return 0;
}

int interpolationSearch(int arr[], int n, int val){
    int hi = n-1;
    int lo = 0;
    while(val >=arr[lo] && val <= arr[hi] && lo <=hi){
        int probe = lo + (hi- lo)*(val - arr[lo])/(arr[hi]- arr[lo]);

        if(arr[probe] == val) return probe;
        else if(arr[probe] < val){
            lo = probe + 1;
        }else{
            hi = probe -1;
        }
    }
    return -1;
}

