#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int count(int b[], int n, int tgt);
int binaryUpperbound(int b[], int n, int val);
double arc(double r, double h);
double lowerLimit(double h, double legalArc);
double maxRadius(double h, double legalArc);

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

double arc(double r, double h){
    return r * acos(h/r);
}

double lowerLimit(double h, double legalArc){               
    double radius = numeric_limits<double>::max();
    while(true){
        if(arc(radius, h) > legalArc) radius = radius/2;
        else break;
    }
    return radius;
}

/*
    Time Complexity:    Finding lowerBound: T(n) = log n 
                        Calculating radius: T(n) = log n

                        Asymptotic Order = O(log n)     
*/

double maxRadius(double h, double legalArc){            
    const double rad_precision = 1.0e-7;
    double lo = lowerLimit(h, legalArc);
    double hi = lo*2;
    double mid;
    while(true){
        mid = (hi+lo)/2;
        double _arc = arc(mid, h); 
        if(abs(_arc - legalArc) > rad_precision){
            if(_arc > legalArc) hi = mid;
            else lo = mid;
        }else break;
    }    
    return mid;
}