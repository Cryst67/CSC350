
#include <iostream>
using namespace std;

void rearr(int arr[],int i, int j);
bool isEven(int n);

/*
Q4. Given section of array A, rearrange A[i ... j] such that odd numbers occur 
    first and even numbers second in the order they are found

    a.  oddEven(A, i, j)
1       n = j-i+1                               //1
1       temp[n]                                 //1
2       v = 0                                   //1
3       for(u = i to j)                         //n
4           if(A[u] is not even)      
5               temp[v] = A[u]
6               v++
7       for(u = i to j)                         //n
8           if(A[u] is even)        
9               temp[v] = A[u]
10              v++
11      copy temp[0 ... n-1] to A[i to j]         //n

    b.  We define n to be the size of the section of the array (j-i+1)
        T(n) =  1 + 1 + 1 + n + n + n
             =  3 + 3n
             =  3(1 + n)

    c.  Asymptotic Order: O(n)
    

*/
int main(){

    int arr[] = {8,2,3,1,9,6,7,11,14,1,0,9};    
    int n = size(arr);
    rearr(arr, 0, 11);
    for (size_t i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n';
    return 0;
}

void rearr(int arr[],int i, int j){
    int* temp = new int[j-i+1];
    int count = i;
    int tempCount = 0;
    while(count <= j){
        if(!isEven(arr[count])){
            temp[tempCount] = arr[count];
            tempCount++;
        }
        count++;
    }
    count = i;
    while (count <= j){
        if(isEven(arr[count])){
            temp[tempCount] = arr[count];
            tempCount++;
        }
        count++;
    }
    
    for (size_t p = i; p < j-i+1; p++){
        arr[p] = temp[p];
    }
    delete [] temp;
}

bool isEven(int n){
    if(n % 2 == 0) return true;
    return false;
}
