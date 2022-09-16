#include <iostream>
#include <cmath>
using namespace std;

int count(int b[], int n, int tgt);
int binaryUpperbound(int b[], int n, int val);

int main(){
    
    return 0;
}

int count(int b[], int n, int tgt){
    return binaryUpperbound(b, n, tgt) - binaryUpperbound(b,n,tgt-1);
}

int binaryUpperbound(int b[], int n, int tgt){
    int lo = -1;
    int hi = n;  //8
    while(lo+1 < hi){
        int mid = (hi+lo)/2;
        if(b[mid] > tgt){
            hi = mid;
        }else lo=mid;
    }
    return hi;            
}

