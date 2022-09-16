#include <iostream>
using namespace std;

/*
    Given a SORTED sequence of values
    Return the upperbound of found value
    Half of the sequence is disregarded during each step
*/

int binaryInsert(int arr[], int n, int val);

int main(){
    
    int arr[] = {17, 22, 22, 22, 35, 36, 36, 49};
    int n = size(arr); //8
    cout << binaryInsert(arr, n, 22) << '\n';
    return 0;
}

int binaryInsert(int arr[], int n, int val){
   int lo = -1;
   int hi = n;  //8
   while(lo+1 < hi){
    int mid = (hi+lo)/2;
    if(arr[mid] > val){
        hi = mid;
    }else lo=mid;
   }
   return hi;            //Never return -1
}