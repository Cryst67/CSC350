/*
Q2. 
    a.  Given a sorted sequence A[0 ... n-1],
        determine at which index 'i' to insert a value 'val'
        such that A remains sorted
    
    b.  Pseudocode
        insertAtIndex(A, val)
1       i                           //1 
2       if(val > A[n-1])            //1
3            i = n          
4       else                        
5           for(u = 0 to n-1)       //n
6               if A[u] >= val,
7                   i = u
8                   break   
9       return i

    c.  n is the size of the sorted sequence A[0 ... n-1]
        T(n) =  1 + 1 + n
             =  n + 2

    d.  Asymptotic Order: O(n)

*/

#include <iostream>
using namespace std;

int insertIndex(int arr[], int n, int val);

int main(){
    int arr[]{12,15,18,18,20,24};
    int test;
    cin >> test;
    cout << insertIndex(arr, size(arr), test) << '\n';
    return 0;
}

int insertIndex(int arr[], int n, int val){
    int index;
    if(arr[n-1] < val) index = n;
    else{
        for(auto i = 0; i < n; i++){
            if(arr[i] >= val) {
                index = i;
                break;
            }
    }
    }
    return index;    

}